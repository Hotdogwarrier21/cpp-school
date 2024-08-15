#include <iostream>

int main() {
  // Define variables for user input
  int x, y;

  // Get user input
  std::cout << "Type a number: ";
  std::cin >> x;
  std::cout << "Type another number: ";
  std::cin >> y;
  
  // Get sum to be outputted
  int sum = x + y;

  // Output sum
  std::cout << "Sum is: " << sum << std::endl;

  return 0;
}
