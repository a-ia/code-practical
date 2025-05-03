#include <vector>
#include <iostream>
#include <string>
#include <map>

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

  std::cout << std::endl << std::flush;

  std::cout << "Declaring 2D array (int arr2d[4][4])" << std::endl;
  int arr2d[4][4];

  std::cout << "Initialize 2D array using loop" << std::endl;
  for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
          arr2d[i][j] = i + j;
      }
  }

  // Print arr2s
  std::cout << "Contents of arr2d (4x4):" << std::endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << arr2d[i][j] << " ";
        }
        std::cout << std::endl;
    }
  
  std::cout << "Initialize 2D statically" << std::endl;
  int array2d[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  std::cout << "Contents of array2d (3x3):" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << array2d[i][j] << " ";
        }
        std::cout << std::endl;
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

  std::cout << std::endl; 
  // Create a map called people that will store strings as keys and integers as values
  // Create a map that will store the name and age of different people
  std::map<std::string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} }; 

  // Accessing is different compared to other containers
  std::cout << "John is: " << people["John"] << std::endl; // Access key "John" in people and get the value (age)
 
  // you can also access with .at() fuction instead of map["Value"]
  // Get the value associated with the key "Adele"
  std::cout << "Adele is: " << people.at("Adele") << std::endl; 

  std::cout << std::endl; 
  std::cout << "Change values of the associated key" << std::endl;
  // Change John's value to 50 instead of 32
  people["John"] = 50;
  //or
  // people.at("John") = 50;
  std::cout << "John is: " << people["John"];
  // to add, you can use square brackets but .insert() function is pretty good too
  people.insert({"Anya", 24});

  // Popular vector functions like empty() earase() clear() can be used for maps similarily
  // LOOPING MAPS
  // Use auto keyword which helps determine data type for key-value pairs
  // you have to inlude .first to access keys and .second for values in th eloop
  
  std::cout << std:: endl << std::endl;

  for (auto person : people) {
    std::cout << person.first << " is: " << person.second << std::endl;
  }

  // You can loop through MAP with an iterator as well.

  return 0;
}

