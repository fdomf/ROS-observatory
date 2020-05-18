import sys

from observatory_interfaces.srv import Dome
import rclpy
from rclpy.node import Node


class DomeClientAsync(Node):

    def __init__(self):
        super().__init__('dome_client_async')
        self.cli = self.create_client(Dome, 'dome_feed')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Dome.Request()

    def send_request(self):
        self.req.dome_action = str(sys.argv[1])
        self.future = self.cli.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)

    dome_client = DomeClientAsync()
    dome_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(dome_client)
        if dome_client.future.done():
            try:
                response = dome_client.future.result()
            except Exception as e:
                dome_client.get_logger().info(
                    'Dome service call failed %r' % (e,))
            else:
                dome_client.get_logger().info(
                    '%s' %
                    (response.dome_response))
            break

    dome_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()