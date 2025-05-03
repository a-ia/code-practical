#include <iostream>
#include <vector>
#include <algorithm>

void rotateArray(std::vector<int>& arr, int k) {
    int n = arr.size();
    k %= n; // handle k > n where remainer is used as the shift
    std::reverse(arr.begin(), arr.end());
    std::reverse(arr.begin(), arr.begin() + k);
    std::reverse(arr.begin() + k, arr.end());
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 2;
    rotateArray(arr, k);

    std::cout << "Test case: {1, 2, 3, 4, 5, 6}, k = 2 | Expected: {5, 6, 1, 2, 3, 4} | Got: {";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i];
        if (i < arr.size() - 1) std::cout << ", ";
    }
    std::cout << "}" << std::endl;
    return 0;
}

