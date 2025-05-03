#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> filterAndSortEven(const std::vector<int>& nums) {
    std::vector<int> result;
    for (int num : nums)
        if (num % 2 == 0) result.push_back(num);
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    auto result = filterAndSortEven({5, 3, 8, 2, 7, 4, 10});
    std::cout << std::boolalpha;
    std::cout << (result == std::vector<int>{2, 4, 8, 10}) << "\n";
}

