import rclpy
from rclpy.node import Node

from dome_interfaces.msg import Sensor

from enum import Enum
'''
import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BOARD)
GPIO.setup(12,GPIO.IN)
reed_state = 0
'''
class State(Enum):
    OPENED   = 0
    CLOSED   = 1

class SensorDriver():
    def __init__(self):
        self.dome_sensors_GPIO = [12,13,14,15,16,17,18,19]
        self.sensors_status = [8]

    def check_dome_current_state(self, sensor_data):
        ''' 
        dome_sensors_GPIO = [12,13,14,15,16,17,18,19]
        for i, sensor in enumerate(dome_sensors_GPIO):
            if GPIO.input(sensor) == 1 and reed_state == 1:
                self.sensors_status[i] = State.OPENED
            if GPIO.input(sensor) == 0 and reed_state == 0:
                self.sensors_status[i] = State.MOVING
        '''
    def get_sensors_status(self):
        return self.sensors_status



class DomeSensorPublisher(Node):

    def __init__(self):
        super().__init__('dome_sensor_publisher')
        self.publisher_ = self.create_publisher(Sensor, 'sensor_feed', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = Sensor()
        msg.sensor_status[0] = str(self.i)
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.sensor_status)
        self.i += 1


def main(args=None):
    rclpy.init(args=args)

    dome_sensor_publisher = DomeSensorPublisher()

    rclpy.spin(dome_sensor_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    dome_sensor_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()