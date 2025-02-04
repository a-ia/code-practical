#include <iostream>
#include <vector>

// Adding a new row (push_back): 
// We can add a new floor and units on that floor 
// to our 'apartment building' using push_back():

int main() {
    std::vector<std::vector<int>> array = {{1, 2, 3},
                                           {4, 5, 6},
                                           {7, 8, 9}};

    // Adding a new row to our array
    array.push_back({10, 11, 12});
    for (const auto& floor : array) {
        for (int unit : floor) {
            std::cout << unit << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
