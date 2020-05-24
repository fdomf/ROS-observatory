

import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)



class Sensor():
    def __init__(self, name, gpio):
        self.name = name
        self.gpio = gpio
        self.state = "INIT"
        self.reed_state = 0
        GPIO.setup(gpio,GPIO.IN)
        

    def initialize_sensors(self):
        self.check_sensor_state()

    def check_sensor_state(self):

       
        if GPIO.input(self.gpio) == 1:
            self.state = "COPEN"
        if GPIO.input(self.gpio) == 0:
            self.state = "CCLOSED"

        ''' test
        print(self.name)
        print (GPIO.input(self.gpio))
        print(self.state)
        '''
    def get_sensor_state(self):
        self.check_sensor_state()
        return self.state