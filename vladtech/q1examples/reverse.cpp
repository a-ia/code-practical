#include <iostream>
#include <vector>

std::string reverseString(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

int main() {
    std::string input = "Hello World";
   
    std::string result = reverseString(input);
    std::cout << "Test case: \"Hello World\" | Expected: dlroW olleH | Got: " << result << std::endl;

  return 0;
}


