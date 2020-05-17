
from .telescope_motors import TelescopeAltMotor, TelescopeAzMotor

class Telescope():
    def __init__ (self):
        self.altitude = 0.0
        self.azimtuh = 0.0
        self.motors = [TelescopeAltMotor("AltitudeMotor", 12), TelescopeAzMotor("AzimuthMotor", 13)]


    def set_coordinates(self, altitude, azimuth):
        self.altitude = altitude
        self.azimtuh = azimuth

    def point_telescope(self):
        self.motors[0].rotate(self.altitude)
        self.motors[1].rotate(self.azimtuh)