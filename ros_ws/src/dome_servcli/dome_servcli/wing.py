



class Wing():
    def __init__(self, name, sensors, motor):
        self.name = name
        self.sensors = sensors
        self.motor = motor
        self.state = "INIT"

    def get_sensors(self):
        return self.sensors

    def get_status(self):
        self.check_wing_status()
        return self.state
    
    def check_wing_status(self):
        if self.sensors[0].get_sensor_state() == "CCLOSED" and self.sensors[1].get_sensor_state() == "COPEN":
            self.state = "CLOSED"
        elif self.sensors[0].get_sensor_state() == "COPEN" and self.sensors[1].get_sensor_state() == "CCLOSED":
            self.state = "OPENED"
        else:
            self.state = "MOVING"

    def open_wing(self):
        self.motor.open()

    def close_wing(self):
        self.motor.close()
    
    def stop_wing(self):
        self.motor.stop()
