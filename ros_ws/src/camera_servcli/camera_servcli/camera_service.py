from observatory_interfaces.srv import Camera

import rclpy
from rclpy.node import Node

from .camera import CameraWebService
import ephem

class CameraService(Node):

    def __init__(self):
        super().__init__('camera_service')
        self.srv = self.create_service(Camera, 'photo_feed', self.callback)
        self.camera = CameraWebService()
        obs = ephem.Observer()
        obs.date = ephem.localtime(ephem.now())
        obs.lon = '2.2531699035940456'
        obs.lat = '41.63773122248425'
        obs.elevation = 207
        vega = ephem.Sun()
        vega.compute(obs)
        print("alt: %s" % (vega.alt))
        print("az: %s" % (vega.az))

    def callback(self, request, response):
        self.camera_action(request, response)
        self.get_logger().info('Incoming request: %s' % (request))

        return response

    def camera_action(self, request, response):
        if(request.camera_action == "take_image"):
            print("SS")
            response.camera_response = "Taking picture..."
        elif(request.camera_action == "analyze_image"):
            tags, objects = self.camera.analyze_image_pipeline(request.file_name)
            response.image_tags = tags
            response.image_objects = objects
        else:
            response.camera_response = "Invalid camera action"


def main(args=None):
    rclpy.init(args=args)

    camera_service = CameraService()

    rclpy.spin(camera_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()