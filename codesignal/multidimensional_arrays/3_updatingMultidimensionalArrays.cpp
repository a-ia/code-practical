#include <iostream>
#include <vector>

int main() {
    // Defining and initializing array
    std::vector<std::vector<int>> array = {{1, 2, 3},
                                           {4, 5, 6},
                                           {7, 8, 9}};

    // Updating an element
    array[0][1] = 10;
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array[i].size(); j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
