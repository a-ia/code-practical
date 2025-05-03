#include <iostream>
#include <string>
 
bool isPalindrome(const std::string& s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        ++left;
        --right;
    }
    return true;
}

int main() { 
    std::cout << std::boolalpha;
    std::cout << isPalindrome("racecar") << "\n"; 
}
