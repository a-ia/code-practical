#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> array = {{1, 2, 3},
                                           {4, 5, 6},
                                           {7, 8, 9}};

    // Accessing an element
    std::cout << array[1][0] << std::endl;  // Outputs: 4

    return 0;
}
