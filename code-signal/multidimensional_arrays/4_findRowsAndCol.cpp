#include <iostream>
#include <vector>

// Finding the number of rows (size): It's like asking how many floors there are in our 'apartment building.' 
// If we use std::vector, we can use the size() method. 
// Additionally, we can find the number of columns (units on each floor) 
// by using the size() method on the first inner vector (assuming it is a non-jagged array, 
// i.e. all inner vectors have the same size):

int main() {
    std::vector<std::vector<int>> array = {{1, 2, 3},
                                           {4, 5, 6},
                                           {7, 8, 9}};

    // Finding the number of rows
    int num_floors = array.size();
    std::cout << num_floors << std::endl;  // Outputs: 3

    // Finding the number of columns
    int num_units = array[0].size();
    std::cout << num_units << std::endl;  // Outputs: 3

    return 0;
}

