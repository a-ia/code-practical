#include <iostream>
#include <vector>

// Creating Multidimensions Arrays
// You Create a 2D vector, which is an array
// In this example, array is a 2-dimensional vector, just like a 3-story 'apartment building,' where every floor is an inner vector.

int main() {
    // Creating a 2D vector
    std::vector<std::vector<int>> array = {{1, 2, 3},
                                           {4, 5, 6},
                                           {7, 8, 9}};

    // Printing the array
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array[i].size(); j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
