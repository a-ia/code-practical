#include <ostream>
#include <vector>
#include <iostream>
#include <string>

int main() {
  
  std::string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Mercedes Benz"};
  
  // This outputs all elements in the cars array:
  for (int i = 0; i < 5; i++) {
    std::cout << cars[i] << "\n";
  }

  std::cout << std::endl;

  // This outputs the index of each element together with its value:
  for (int i = 0; i < 5; i++) {
    std::cout << i << " = " << cars[i] << "\n";
  }

  std::cout << std::endl;

  // This loops through an array of integers
  int myNumbers[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++) {
    std::cout << myNumbers[i] << "\n";
  }

  std::cout << std::endl;
  
  // Create a vector called cars that will store strings
  std::vector<std::string> raceCars = {"Volvo", "BMW", "Ford", "Mazda"};
  for (std::string raceCar : raceCars) {
    std::cout << raceCar << "\n";
  }

  std::cout << std::endl;

  return 0;
}


