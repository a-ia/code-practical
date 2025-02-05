#include <iostream>
#include <vector>

/*
* You're tasked with overseeing a residential building in a digital realm, 
* fashioned out of C++ arrays. Your job is to initialize a 3-story 
* building (array), with 3 units per floor. Then, mark a particular unit 
* as vacant by updating its name, and finally, conduct a roll call for 
* the entire building, one story at a time. Brace yourself to wield the 
* essence of multidimensional arrays in C++.
*/

int main() {

  std::vector<std::vector<std::string>> apartments {
    {"Apt 101", "Apt 102", "Apt 103"},
    {"Apt 201", "Apt 202", "Apt 203"},
    {"Apt 301", "Apt 303", "Apt 303"}
  };

  apartments[1][1] = "Vacant";

  for (const auto& floor : apartments) {
    for (const auto unit : floor) {
      std::cout << unit << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
