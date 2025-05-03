#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

std::string filterAndTransformEven(const std::vector<int>& nums) {
    std::vector<int> result;
    for (int num : nums) if (num % 2 == 0) result.push_back(num);
    std::sort(result.begin(), result.end());

    // Join the numbers into a string
    std::string result_str;
    for (int num : result) result_str += std::to_string(num) + " ";
    return result_str;
}

int main() {
    std::cout << filterAndTransformEven({5, 3, 8, 2, 7, 4, 10}) << std::endl;
}

