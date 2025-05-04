#include <iostream>
#include <vector>

int main() {
    // Creating a 2D vector representing an apartment building
    std::vector<std::vector<std::string>> building = {
        {"1A", "1B", "1C"},
        {"2A", "2B", "2C"},
        {"3A", "3B", "3C"}
    };

    // TODO: Complete the code to print the apartment codes of the ground floor only.
    building[1][1] = "Renovated Apt 202";
    
    for (const auto& unit : building[0]) {
        std::cout << unit << ", ";
    }
    std::cout << std::endl;
    
    return 0;
}
