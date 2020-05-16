
'''
import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BOARD)
GPIO.setup(12,GPIO.IN)
'''

class Sensor():
    def __init__(self, name, gpio):
        self.name = name
        self.gpio = gpio
        self.state = "INIT"
        self.reed_state = 0
        

    def initialize_sensors(self):
        self.check_sensor_state()

    def check_sensor_state(self):
        ''' code test
        if self.name == "LLC":
            self.state = "OFF"
        elif self.name == "LLO":
            self.state = "ON"
        elif self.name == "LUC":
            self.state = "OFF"
        elif self.name == "LUO":
            self.state = "ON"
        elif self.name == "RLC":
            self.state = "OFF"
        elif self.name == "RLO":
            self.state = "ON"
        elif self.name == "RUC":
            self.state = "OFF"
        elif self.name == "RUO":
            self.state = "ON"
        '''
        
        pass
        '''
        if GPIO.input(self.gpio) == 1 and self.reed_state == 0:
            self.state = "ON"
        if GPIO.input(self.gpio) == 0 and self.reed_state == 1:
            self.state = "OFF"
        '''
    def get_sensor_state(self):
        self.check_sensor_state()
        return self.state