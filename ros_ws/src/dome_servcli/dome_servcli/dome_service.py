from observatory_interfaces.srv import Dome

import rclpy
from rclpy.node import Node

from enum import Enum
from .dome import Dome as DomeClass

class State(Enum):
    INIT     = 0
    OPENED   = 1
    CLOSED   = 2
    OPENING  = 3
    CLOSING  = 4
    MOVING   = 5

class DomeService(Node):

    def __init__(self):
        super().__init__('dome_service')
        self.srv = self.create_service(Dome, 'dome_feed', self.callback)
        self.dome = DomeClass()
        

    def callback(self, request, response):
        self.dome_action(request, response)
        self.get_logger().info('Incoming request: %s ' % (request))


        return response

    def dome_action(self, request, response):
        if(request.dome_action == "open"):
            self.dome_open(response)
        elif (request.dome_action == "close"):
            self.dome_close(response)
        elif (request.dome_action == "status"):
            self.dome_status(response)
        else:
            self.dome_service_output(response, "Invalid dome action")

    def dome_service_output(self, response, msg):
        response.dome_response = msg
        

    def dome_open(self, response):
        self.dome.open_dome()
        self.dome_service_output(response, "Opening dome")
    
    def dome_close(self, response):
        self.dome.close_dome()
        self.dome_service_output(response, "Closing dome")

    def dome_status(self, response):
        if self.dome.get_dome_status().name == State.OPENED.name:
            self.dome_service_output(response, "The dome is opened")
        elif self.dome.get_dome_status().name == State.CLOSED.name:
            self.dome_service_output(response, "The dome is closed")
        elif self.dome.get_dome_status().name == State.OPENING.name:
            self.dome_service_output(response, "The dome is closed")
        elif self.dome.get_dome_status().name == State.CLOSING.name:
            self.dome_service_output(response, "The dome is closed")
        elif self.dome.get_dome_status().name == State.MOVING.name:
            self.dome_service_output(response, "The dome is moving")
        else:
            self.dome_service_output(response, "STATE ERROR")



def main(args=None):
    rclpy.init(args=args)

    dome_service = DomeService()


    rclpy.spin(dome_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()


