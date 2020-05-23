

#from adafruit_servokit import ServoKit
#kit = ServoKit(channels=16)
from .magnetometer import Magnetometer

class TelescopeMotor():
    def __init__(self, name, identifier):
        self.name = name
        self.kit_id = identifier
        self.rotate(0)

    def rotate(self, angle):
        pass
        #kit.servo[self.kit_id].angle = angle


class TelescopeAltMotor(TelescopeMotor):
    def __init__(self,name, identifier):
        super().__init__(name, identifier)


class TelescopeAzMotor(TelescopeMotor):
    def __init__(self,name, identifier):
        super().__init__(name, identifier)
       # self.magnetometer = Magnetometer()
        self.offset = 5.0
    
    def check_angle(self, mag_angle, obj_angle):
        is_between = False
        if (obj_angle - self.offset) <= mag_angle <= (obj_angle + self.offset):
            is_between = True
        return is_between

    def rotate(self, angle):
        '''
        current_heading = self.magnetometer.get_heading()
        
        kit.continuous_servo[self.kit_id].throttle = 0.5
        while (not self.check_angle(current_heading, angle)):
            self.magnetometer.print_heading()

        kit.continuous_servo[self.kit_id].throttle = 0
        '''

''' test
def main():
    tele = TelescopeAzMotor("a", 12)
    print(tele.check_angle(50.25585,44))


if __name__ == '__main__':
    main()
'''