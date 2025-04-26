#include <iostream>
#include <vector>

/* 
 * All indices in C++ arrays are 0-based. 
 * Let's say you want to visit an apartment on the second floor (index 1) 
 * and bring a package to the first unit (index 0) in this building. Here's how you can do it:
 */
    
int main() {
    std::vector<std::vector<int>> array = {{1, 2, 3},
                                           {4, 5, 6},
                                           {7, 8, 9}};

    // Accessing an element
    std::cout << array[1][0] << std::endl;  // Outputs: 4

    return 0;
}

/*
 * We visited the element 4 in the array by its position. 
 * The number 1 inside the first square brackets refers to the second inner vector, 
 * and 0 refers to the first element of that vector.
 */
