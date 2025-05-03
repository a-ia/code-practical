#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

std::string mostFrequentName(const std::vector<std::string>& names) {
    std::unordered_map<std::string, int> freq;
    for (const auto& name : names) {
        freq[name]++;
    }

    std::string mostCommon;
    int maxCount = 0;

    for (const auto& pair : freq) {
        if (pair.second > maxCount) {
            mostCommon = pair.first;
            maxCount = pair.second;
        }
    }

    return mostCommon;
}

// Test case
int main() {
    std::vector<std::string> names = {"Sharon", "Jana", "Sharon", "Shery", "Shery", "Shana", "Sharon"};
    std::string result = mostFrequentName(names);
    std::cout << "Test case: {\"Sharon\", \"Jana\", \"Sharon\", \"Shery\", \"Shery\", \"Shana\", \"Sharon\"} | Expected: Sharon | Got: " << result << std::endl;
    return 0;
}

