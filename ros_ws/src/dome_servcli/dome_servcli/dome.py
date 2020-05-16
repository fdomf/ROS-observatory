

from enum import Enum
from wing import Wing
from sensor import Sensor
from motor import Motor


class State(Enum):
    INIT     = 0
    OPENED   = 1
    CLOSED   = 2
    OPENING  = 3
    CLOSING  = 4
    MOVING   = 5


class Dome():

    def __init__(self):
        self.status = State.INIT
        self.wings = []
        self.initialize_dome()


    def check_dome_status(self):
        temp_open_check = 0
        temp_close_check = 0

        for wing in self.wings:
            if wing.get_status() == "OPENED":
               temp_open_check += 1
            elif wing.get_status() == "CLOSED":
                temp_close_check += 1

        if temp_open_check == len(self.wings):
            self.status = State.OPENED
        elif temp_close_check == len(self.wings):
            self.status = State.CLOSED
        else:
            self.status = State.MOVING


    def initialize_dome(self):
        #Object creation (wings and sensors)
        sensors = self.create_sensors()
        self.wings = self.create_wings(sensors)
        print("Initialising dome")
        self.initialize_sensors()
        self.check_dome_status()

    def initialize_sensors(self):
        for wing in self.wings:
            sensors = wing.get_sensors()
            for sensor in sensors:
                sensor.initialize_sensors()

    def get_dome_status(self):
        self.check_dome_status()
        return self.status

    def create_sensors(self):
        sensors = {"LLC": 12, "LLO": 13, "LUC": 14, "LUO": 15, "RLC": 16, "RLO": 17, "RUC": 18, "RUO": 19}
        sensor_temp_list = []
        for name, gpio in sensors.items():
            sensor_temp_list.append(Sensor(name, gpio))
        return sensor_temp_list

    def create_wings(self, sensors):
        wings = ["left lower", "left upper","right lower", "right upper"]
        wing_temp_list = [Wing("left lower", sensors[0:2], Motor("LLM", 0)),
                          Wing("left upper", sensors[2:4], Motor("LUM", 1)),
                          Wing("righ lower", sensors[4:6], Motor("RLM", 2)),
                          Wing("righ upper", sensors[6:8], Motor("RUM", 3))]
        return wing_temp_list


    def close_dome(self):
        self.check_dome_status()
        if self.status == State.OPENED:

            self.status = State.CLOSING
            self.wings[0].close_wing()
            self.wings[2].close_wing()
            lower_wings_closed = False

            while not lower_wings_closed:
                if self.wings[0].get_status() == "CLOSED" and self.wings[2].get_status() == "CLOSED":
                    self.wings[0].stop_wing()
                    self.wings[2].stop_wing()
                    lower_wings_closed = True

            print("Lower wings closed.")

            self.wings[1].close_wing()
            self.wings[3].close_wing()
            upper_wings_closed = False

            while not upper_wings_closed:
                if self.wings[1].get_status() == "CLOSED" and self.wings[3].get_status() == "CLOSED":
                    self.wings[1].stop_wing()
                    self.wings[3].stop_wing()
                    upper_wings_closed = True

            print("Upper wings closed.")
            self.status = State.CLOSED

        else:
            print("The dome is already closed or moving.")

    def open_dome(self):
        self.check_dome_status()
        if self.status == State.CLOSED:


            self.status = State.OPENING
            self.wings[0].open_wing()
            self.wings[2].open_wing()
            lower_wings_opened = False

            while not lower_wings_opened:
                if self.wings[0].get_status() == "OPENED" and self.wings[2].get_status() == "OPENED":
                    lower_wings_opened = True

            print("Lower wings opened.")

            self.wings[1].close_wing()
            self.wings[3].close_wing()
            upper_wings_opened = False

            while not upper_wings_opened:
                if self.wings[1].get_status() == "OPENED" and self.wings[3].get_status() == "OPENED":
                    upper_wings_opened = True

            print("Upper wings opened.")
            self.status = State.OPENED

        else:
            print("The dome is already opened or moving.")


def main():

    
    dome = Dome()
    print(dome.get_dome_status())
    dome.close_dome()
    

  
    


if __name__ == '__main__':
    main()

