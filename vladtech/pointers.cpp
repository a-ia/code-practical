#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

void printRemaining(std::string* start, int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << start[i] << '\n';
    }
}

void sortTail(std::string* tail, int length) {
    std::sort(tail, tail + length);
}

int main() {

  std::string name = "Sharon";
  std::string* pName = &name;

    std::cout << "Value stored in pName (address of name): " << pName << '\n';
    std::cout << "Dereferenced pName gives: " << *pName << '\n';
    std::cout << "sizeof(pName): " << sizeof(pName) << " bytes\n\n"; // returns 8 bytes

  /*
    Address Value   Meaning
    0x1000	Sharon  A string
    0x2000	0x1000  Pointer to it

    "Sharon" lives at memory location 0x1000.

    pName stores 0x1000 and that takes 8 bytes.
  */ 

  std::string freeStars[5] = {
          "star 3", "star 1", "star 5", "star 2", "star 4"
  };

  std::string* pFreeStars = freeStars; // For array works w/o & as its already an address. reduced into a pointer of the first element.
  
  std::cout << std::endl;
  std::cout << "Print star array:\n";
  for (std::string stars : freeStars) {
    std::cout << stars << std::endl;
  }


  // Use of & operator in arrays "&array[i]" gives the memory address of the i-th element. 
  // is useful for Passing a specific part of an array to a function, Pointer arithmetic, and memory manipulation.
  std::cout << std::endl;
  std::cout << "Print 3 stars from address of index 2 to 4:\n";
  printRemaining(&freeStars[2], 3); // prints 3 stars from index 2 to 4

  // Sort the entire array starting from index 0
  sortTail(&freeStars[0], sizeof(freeStars) / sizeof(freeStars[0]));

  // Print all elements to see the result
  std::cout << std::endl;
  std::cout << "All stars after sorting part of the array:\n";
  for (const auto& star : freeStars) {
     std::cout << star << '\n';
  }

  return 0;
}
