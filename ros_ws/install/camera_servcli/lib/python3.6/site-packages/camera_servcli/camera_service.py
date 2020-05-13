from dome_interfaces.srv import Camera

import rclpy
from rclpy.node import Node

import requests
import json

class CameraService(Node):

    def __init__(self):
        super().__init__('camera_service')
        self.srv = self.create_service(Camera, 'photo_feed', self.callback)

    def callback(self, request, response):
        self.camera_action(request, response)
        self.get_logger().info('Incoming request: %s' % (request))

        return response

    def camera_action(self, request, response):
        if(request.camera_action == "analyze_image"):
            R = requests.post('http://nova.astrometry.net/api/login', data={'request-json': json.dumps({"apikey": "pcnjeiosxtccosfp"})})
            json_data = json.loads(R.text)
            response.camera_response[0] = "OK"
            session = str(json_data.get("session"))


            data = {
                'session' : "70h87dqi86uib1p1oqz4s4booxrbiggx",
                'name'  : "file_name.png",
            }
            headers = {'Content-type': 'multipart/form-data'}
            files = {'image': open('/home/francesc/Escritorio/ros_ws/src/camera_servcli/camera_servcli/file_name.png', 'rb')}
            url = "http://nova.astrometry.net/api/upload"
            r = requests.post(url, files=files, data=data, headers=headers)
           # R = requests.post('http://nova.astrometry.net/api/url_upload', data={'request-json': json.dumps({"session": "70h87dqi86uib1p1oqz4s4booxrbiggx", "url": "http://apod.nasa.gov/apod/image/1206/ldn673s_block1123.jpg", "scale_units": "degwidth", "scale_lower": 0.5, "scale_upper": 1.0, "center_ra": 290, "center_dec": 11, "radius": 2.0 })})
            print(r.text)
        else:
            response.camera_response[0] = "Invalid weather action"


def main(args=None):
    rclpy.init(args=args)

    camera_service = CameraService()

    rclpy.spin(camera_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()