import sys

from dome_interfaces.srv import Telescope
import rclpy
from rclpy.node import Node


class TelescopeClientAsync(Node):

    def __init__(self):
        super().__init__('telescope_client_async')
        self.cli = self.create_client(Telescope, 'telescope_positioning')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Telescope.Request()

    def send_request(self):
        self.req.telescope_action = str(sys.argv[1])
        self.req.alt = float(sys.argv[2])
        self.req.az = float(sys.argv[3])
        self.future = self.cli.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)

    telescope_client = TelescopeClientAsync()
    telescope_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(telescope_client)
        if telescope_client.future.done():
            try:
                response = telescope_client.future.result()
            except Exception as e:
                telescope_client.get_logger().info(
                    'Telescope service call failed %r' % (e,))
            else:
                telescope_client.get_logger().info(
                    '%s' %
                    (response.telescope_response))
            break

    telescope_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()