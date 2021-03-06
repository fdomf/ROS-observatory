import sys

from observatory_interfaces.srv import Camera
import rclpy
from rclpy.node import Node


class CameraClientAsync(Node):

    def __init__(self):
        super().__init__('camera_client_async')
        self.cli = self.create_client(Camera, 'camera_feed')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Camera.Request()

    def send_request(self):
        self.req.camera_action = str(sys.argv[1])
        if self.req.camera_action == "analyze_image":
            self.req.file_name= str(sys.argv[2])
        self.future = self.cli.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)

    camera_client = CameraClientAsync()
    camera_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(camera_client)
        if camera_client.future.done():
            try:
                response = camera_client.future.result()
            except Exception as e:
                camera_client.get_logger().info(
                    'Service call failed %r' % (e,))
            else:
                camera_client.get_logger().info('%s' % (response.camera_response))
                if camera_client.req.camera_action == "analyze_image":
                    camera_client.get_logger().info('TAGS: %s\n  OBJECTS: %s' % (response.image_tags, response.image_objects))
            break

    camera_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()