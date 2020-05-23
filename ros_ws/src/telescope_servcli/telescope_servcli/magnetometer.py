import time
'''
from math import atan2, degrees
import board
import busio
import adafruit_lsm303dlh_mag
'''
class Magnetometer():
    def __init__(self):
        self.i2c = busio.I2C(board.SCL, board.SDA)
        self.sensor = adafruit_lsm303dlh_mag.LSM303DLH_Mag(self.i2c)

    def vector_2_degrees(self, x, y):
        angle = degrees(atan2(y, x))
        if angle < 0:
            angle += 360
        return angle
    
    def get_heading(self):
        magnet_x, magnet_y, _ = self.sensor.magnetic
        return self.vector_2_degrees(magnet_x, magnet_y)

    def print_heading(self):
        print("Heading: {:.2f} degrees", format(self.get_heading()))
