import sys

from observatory_interfaces.srv import Weather
import rclpy
from rclpy.node import Node


class WeatherClientAsync(Node):

    def __init__(self):
        super().__init__('weather_client_async')
        self.cli = self.create_client(Weather, 'weather_info')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Weather.Request()

    def send_request(self):
        self.req.weather_action = str(sys.argv[1])
        self.future = self.cli.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)

    weather_client = WeatherClientAsync()
    weather_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(weather_client)
        if weather_client.future.done():
            try:
                response = weather_client.future.result()
            except Exception as e:
                weather_client.get_logger().info(
                    'Service call failed %r' % (e,))
            else:
                weather_client.get_logger().info(
                    '%s' %
                    (response.data_response))
            break

    weather_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()