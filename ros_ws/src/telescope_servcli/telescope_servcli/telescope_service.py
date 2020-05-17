from dome_interfaces.srv import Telescope

import rclpy
from rclpy.node import Node

from .telescope import Telescope as TelescopeClass

class TelescopeService(Node):

    def __init__(self):
        super().__init__('telescope_service')
        self.srv = self.create_service(Telescope, 'telescope_positioning', self.callback)
        self.alt = 0.0
        self.az = 0.0
        self.telescope = TelescopeClass()

    def callback(self, request, response):
        self.telescope_action(request, response)
        self.get_logger().info('Incoming request action %s. Alt: %f Az: %f' % (request.telescope_action, request.alt, request.az))

        return response

    def telescope_action(self, request, response):
        if(request.telescope_action == "goto"):
            self.alt = request.alt
            self.az = request.az
            self.telescope_goto(response)
        else:
            self.telescope_service_output(response, "Invalid telescope action")

    def telescope_goto(self, response):
        '''
        Todo: telescope fucntions to control the 360º servo base with the magnetometer and the telescope 90ºmax with a 180º (modified) servo
        '''
        self.telescope.set_coordinates(self.alt, self.az)
        self.telescope.point_telescope()
        self.telescope_service_output(response, "Telescope pointed at Altitude: %f Azimuth: %f"% (self.alt, self.az))
    
    def telescope_service_output(self, response, msg):
        response.telescope_response = msg


def main(args=None):
    rclpy.init(args=args)

    telescope_service = TelescopeService()

    rclpy.spin(telescope_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()