#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<std::string>> building = {
        {"1A", "1B", "1C"},
        {"2A", "2B", "2C"},
        {"3A", "3B", "3C"}
    };

    // Print only ground floor (index 0)
    for (const auto& unit : building[0]) {
        std::cout << unit << ", ";
    }
    std::cout << std::endl;
    
    return 0;
}

// Works but not ideal. You can instead like in the above code,
// Access the ground floor using building[0],
// Only have one loop since we're only printing one floor
// Remove uneccessary conditional checks
// Better intent
//
//   for (const auto& floor : building) {
//      for (const auto& unit : floor) {
//          if (unit == "2A") {
//              break;
//          }
//         if (unit == "3A") {
//              break;
//          }
//          std::cout << unit << ", ";
//      }
//      std::cout << std::endl;
//   }
