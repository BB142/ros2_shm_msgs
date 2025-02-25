#include <rclcpp/rclcpp.hpp>

#include <memory>

#include "gmat_image_talker.hpp"
#include "gmat_image_listener.hpp"

int main(int argc, char * argv[])
{
  setvbuf(stdout, NULL, _IONBF, BUFSIZ);
  rclcpp::init(argc, argv);
  rclcpp::executors::SingleThreadedExecutor executor;

  auto talker = std::make_shared<Talker>();

  executor.add_node(talker);


  executor.spin();
  rclcpp::shutdown();
  return 0;
}