

from adafruit_servokit import ServoKit
kit = ServoKit(channels=16)

from magnetometer import Magnetometer

class TelescopeMotor():
    def __init__(self, name, identifier):
        self.name = name
        self.kit_id = identifier
        

    def rotate(self, angle):
        kit.servo[self.kit_id].angle = angle


class TelescopeAltMotor(TelescopeMotor):
    def __init__(self,name, identifier):
        super().__init__(name, identifier)
        self.rotate(0)


class TelescopeAzMotor(TelescopeMotor):
    def __init__(self,name, identifier):
        super().__init__(name, identifier)
        self.magnetometer = Magnetometer()
        self.offset = 3.0
        self.rotate(0)

    def check_angle(self, mag_angle, obj_angle):
        is_between = False
        
        if (obj_angle - self.offset) < mag_angle and mag_angle < (obj_angle + self.offset):
            is_between = True
            print (mag_angle)
            
        return is_between

    def rotate(self, angle):
        current_heading = self.magnetometer.get_heading()
        max = 20000
        count = 0
        
        kit.continuous_servo[self.kit_id].throttle = 0.5
        while (self.check_angle(current_heading, angle) == False and count < max):
            #self.magnetometer.print_heading()
            current_heading = self.magnetometer.get_heading()
            count += 1

        kit.continuous_servo[self.kit_id].throttle = 0
        
        

'''
def main():
    tele = TelescopeAzMotor("a", 15)
    tele.rotate(15)


if __name__ == '__main__':
    main()
'''