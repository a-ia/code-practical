#include <iostream>
#include <vector>
#include <string>

int main() {
    // Initializing a 2D array that represents an apartment building
    std::vector<std::vector<std::string>> apartments = {
        {"Apt 101", "Apt 102"}, 
        {"Apt 201", "Apt 202"}
    };

    // TODO: Add a new floor with apartments to our 'apartment building' 
    // apartments.push_back({"Apt 301", "Apt 302"});
    apartments.pop_back();  

    // and then make a walk visiting each apartment on every floor.
    for (const auto& floor : apartments) { // Iterates over each "floor" (vector of strings)
        for (const auto unit : floor) { // Iterates over each "unit" (string) in the floor
            std::cout << unit << " "; // Unit is the value at each index in the floor vector
        }
        std::cout << std::endl;
        // Print a newline to the console. Sends new line to the output stream. In our case,
        // the loops allows this to print a newline after each floor's apartments are listed
    }
    
    /* Note: 
    *  Index: The position of an element in the vector (e.g., 0, 1, 2, ...).
    *  Unit: The actual content (value) at each index (e.g., "Apt 101", "Apt 102").
    */
 
    return 0;
}
