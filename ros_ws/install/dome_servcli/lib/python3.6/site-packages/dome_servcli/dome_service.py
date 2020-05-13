from dome_interfaces.srv import Dome

import rclpy
from rclpy.node import Node

from enum import Enum

'''
import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BOARD)
GPIO.setup(12,GPIO.IN)

from adafruit_servokit import ServoKit
kit = ServoKit(channels=16)

'''



class State(Enum):
    OPENED   = 0
    CLOSED   = 1
    OPENING  = 2
    CLOSING  = 3
    UNKNOWN  = 4

class DomeService(Node):

    def __init__(self):
        super().__init__('dome_service')
        self.srv = self.create_service(Dome, 'test', self.callback)
        self.state = State.UNKNOWN
        

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
        if(self.state == State.UNKNOWN):
            self.dome_service_output(response, "Opening dome")
            self.state = State.OPENING
            opened = False
            #while (opened == False):
                #print("T")


        '''
            Todo -> activate / deactivate servos according to the sensors output
            kit.continuous_servo[0].throttle = 1
            kit.continuous_servo[1].throttle = 1
        '''
        
        
        
    
    def dome_close(self, response):
        '''
        if(self.state == State.OPEN or self.state == State.OPENING):
            kit.continuous_servo[0].throttle = 1
            kit.continuous_servo[1].throttle = 1
        '''
        self.state = CLOSING
        self.dome_service_output(response, "Closing dome")

    def dome_status(self, response):
        if self.state == State.OPENED:
            self.dome_service_output(response, "The dome is opened")
        elif self.state == State.CLOSED:
            self.dome_service_output(response, "The dome is closed")
        elif self.state == State.OPENING:
            self.dome_service_output(response, "The dome is closed")
        elif self.state == State.CLOSING:
            self.dome_service_output(response, "The dome is closed")
        elif self.state == State.UNKNOWN:
            self.dome_service_output(response, "The dome status is unknown")
        else:
            self.dome_service_output(response, "STATE ERROR")

    def check_dome_current_state(self, sensor_data):
        pass
        ''' 
        dome_sensors_GPIO = [12,13,14,15,16,17,18,19]
        for i, sensor in enumerate(dome_sensors_GPIO):
            if GPIO.input(sensor) == 1 and reed_state == sensor_data[i]:
                self.state = OPENED
            if GPIO.input(sensor) == 0 and reed_state == sensor_data[i]:
                self.state = CLOSED
        '''
    


def main(args=None):
    rclpy.init(args=args)

    dome_service = DomeService()

    rclpy.spin(dome_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()