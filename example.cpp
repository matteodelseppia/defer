#include <iostream>
#include "defer.hpp"

int main() {
  auto deferred_print = dts::make_defer([]() { 
    std::cout << "Deferred print" << std::endl; 
  });

  std::cout << "This must be printed first" << std::endl;
}