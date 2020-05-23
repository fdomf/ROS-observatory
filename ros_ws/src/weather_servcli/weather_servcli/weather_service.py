from observatory_interfaces.srv import Weather

import rclpy
from rclpy.node import Node
from .weatherstation import WeatherStation


class WeatherService(Node):

    def __init__(self):
        super().__init__('weather_service')
        self.srv = self.create_service(Weather, 'weather_info', self.callback)
        self.weather_st = WeatherStation()

    def callback(self, request, response):
        self.weather_action(request, response)
        self.get_logger().info('Incoming request: %s'% (request))

        return response
        
    def weather_action(self, request, response):
        if(request.weather_action == "info"):
            response.data_response = self.weather_st.get_weather()
        else:
            response.data_response = ["Invalid weather action"]
        print(response.data_response)


def main(args=None):
    rclpy.init(args=args)

    weather_service = WeatherService()

    rclpy.spin(weather_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()