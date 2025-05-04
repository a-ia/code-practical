#include <iostream>
#include <vector>

// Given an array of integers, find the sum of even nums

int sumEven(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        if (num % 2 == 0) {
            sum += num;
        }
    }
    return sum;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    int result = sumEven(arr);
    std::cout << "Test case: {1, 2, 3, 4, 5, 6} | Expected: 12 | Got: " << result << std::endl;
    return 0;
}
