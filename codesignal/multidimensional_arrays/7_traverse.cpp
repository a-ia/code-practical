#include <iostream>
#include <vector>

// We can visit every floor (outer array) 
// and every apartment on each floor (inner array) by using nested loops:

int main() {
    std::vector<std::vector<std::string>> array = {{"Apt 101", "Apt 102", "Apt 103"},
                                                   {"Apt 201", "Exit Floor", "Apt 203"},
                                                   {"Apt 301", "Apt 302", "Apt 303"}};
    
    // Loop through 2D array
    for (const auto& floor : array) {
        for (const auto& unit : floor) {
            std::cout << unit << ", ";
        }
        std::cout << std::endl;
    }

    return 0;
}

/*
Prints:
Apt 101, Apt 102, Apt 103,
Apt 201, Exit Floor, Apt 203,
Apt 301, Apt 302, Apt 303,
*/
