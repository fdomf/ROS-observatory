

#from adafruit_servokit import ServoKit
#kit = ServoKit(channels=16)


class TelescopeMotor():
    def __init__(self, name, identifier):
        self.name = name
        self.kit_id = identifier

    def rotate(self, angle):
        pass
        #kit.servo[self.kit_id].angle = angle


class TelescopeAltMotor(TelescopeMotor):
    def __init__(self,name, identifier):
        super().__init__(name, identifier)


class TelescopeAzMotor(TelescopeMotor):
    def __init__(self,name, identifier):
        super().__init__(name, identifier)
        #self.magnetometer = "" #Todo magnetometer object

    def rotate(self, angle):
        pass
        '''Todo
        kit.continuous_servo[self.kit_id].throttle = 1
        while (magnetomter angle condition) {
            print("Rotating: %f", magnetometer.degrees)

        }
        kit.continuous_servo[self.kit_id].throttle = 0
        '''

'''
def main():
    tele = TelescopeAzMotor("a", 12)



    


if __name__ == '__main__':
    main()
'''