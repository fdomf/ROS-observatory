from observatory_interfaces.srv import Weather

import rclpy
from rclpy.node import Node

from pprint import pprint
import requests
import json

class WeatherService(Node):

    def __init__(self):
        super().__init__('weather_service')
        self.srv = self.create_service(Weather, 'weather_info', self.callback)

    def callback(self, request, response):
        self.weather_action(request, response)
        self.get_logger().info('Incoming request: %s'% (request))

        return response
        
    def weather_action(self, request, response):
        if(request.weather_action == "info"):
            r = requests.get('http://api.openweathermap.org/data/2.5/weather?lat=41.500551&lon=2.110585&APPID=1aba1b010540ae656788058cd4cc7559')
            json_data = json.loads(r.text)
            response.data_response[0] = str(json_data.get("weather")[0].get("main"))
            response.data_response[1] = str(json_data.get("weather")[0].get("description"))
            response.data_response[2] = str(json_data.get("main").get("temp"))
            response.data_response[3] = str(json_data.get("main").get("pressure"))
            response.data_response[4] = str(json_data.get("main").get("humidity"))
            response.data_response[5] = str(json_data.get("wind").get("speed"))
            response.data_response[6] = str(json_data.get("wind").get("deg"))
            response.data_response[7] = str(json_data.get("coord"))
            response.data_response[8] = str(json_data.get("name"))
        else:
            response.data_response[0] = "Invalid weather action"


def main(args=None):
    rclpy.init(args=args)

    weather_service = WeatherService()

    rclpy.spin(weather_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()