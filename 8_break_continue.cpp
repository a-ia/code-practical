#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<std::string>> array = {{"Apt 101", "Apt 102", "Apt 103"},
                                                   {"Apt 201", "Exit Floor", "Apt 203"},
                                                   {"Apt 301", "Apt 302", "Apt 303"}};
    
    // Break in nested loop
    for (const auto& floor : array) {
        for (const auto& unit : floor) {
            if (unit == "Exit Floor") {
                break;
            }
            std::cout << unit << ", ";
        }
        std::cout << std::endl;
    }

/*
Prints:
Apt 101, Apt 102, Apt 103,
Apt 201,
Apt 301, Apt 302, Apt 303,
*/

    // Continue in nested loop
    for (const auto& floor : array) {
        for (const auto& unit : floor) {
            if (unit == "Exit Floor") {
                continue;
            }
            std::cout << unit << ", ";
        }
        std::cout << std::endl;
    }

    return 0;
}

/*
Prints:
Apt 101, Apt 102, Apt 103,
Apt 201, Apt 203,
Apt 301, Apt 302, Apt 303,
*/
