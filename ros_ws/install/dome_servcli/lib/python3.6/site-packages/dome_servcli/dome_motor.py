

#from adafruit_servokit import ServoKit
#kit = ServoKit(channels=16)

class DomeMotor():
    def __init__(self, name, identifier):
        self.name = name
        self.kit_id = identifier

    def open(self):
        pass
        #kit.continuous_servo[kit_id].throttle = 1
    def close(self):
        pass
        #kit.continuous_servo[kit_id].throttle = -1
    def stop(self):
        pass
        #kit.continuous_servo[kit_id].throttle = 0