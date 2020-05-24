

from adafruit_servokit import ServoKit
kit = ServoKit(channels=16)

class DomeMotor():
    def __init__(self, name, identifier):
        self.name = name
        self.kit_id = identifier

    def open(self):
        kit.continuous_servo[self.kit_id].throttle = 0.5
    def close(self):
        kit.continuous_servo[self.kit_id].throttle = -0.5
    def stop(self):
        kit.continuous_servo[self.kit_id].throttle = 0