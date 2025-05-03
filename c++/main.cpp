#include <ostream>
#include <vector>
#include <iostream>
#include <string>

int main() {
  
  std::string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Mercedes Benz"};
  
  std::cout << "This output is all elements in the cars array:" << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << cars[i] << "\n";
  }

  cars[0] = "Opel";
  
  std::cout << std::endl << "Changed Value: " << cars[0];

  std::cout << std::endl << "This outputs the index of each element together with its value:" << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << i << " = " << cars[i] << "\n";
  }

  std::cout << std::endl << "This loops through an array of integers" << std::endl;
  int myNumbers[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++) {
    std::cout << myNumbers[i] << "\n";
  }

  std::cout << std::flush;

  // Declaring 2D array
  int arr2d[4][4];

  // Initialize 2D array using loop
  for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
          arr2d[i][j] = i + j;
      }
  }

  std::cout << std::endl;
  //Create a vector called cars that will store strings
  std::vector<std::string> raceCars = {"Chevy Impala", "Mercedes-AMG GT 63", "Lamborghini Revuelto", "McLaren Artura Spider"};
  for (std::string raceCar : raceCars) {
    std::cout << raceCar << "\n" << std::flush;
  }

  std::cout << std::endl << "Get the first element with .front: " << raceCars.front() << std::flush;

  std::cout << std::endl << "Get the last element with .back: " << raceCars.back() << std::flush;

  std::cout << std::endl << "Access an element with .at() function: " << raceCars.at(2) << std::flush;

  return 0;
}

