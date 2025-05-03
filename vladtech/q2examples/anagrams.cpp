#include <iostream>
#include <string>
#include <algorithm>

// The sort function here is used to check for anagrams by sorting both strings alphabetically.
// If two words contain the same letters, sorting them will result in identical strings. er er
// s1.begin() returns an iterator (think of it like a pointer) to the first character in the string.
// s1.end() returns an iterator to one past the last character in the string.

bool areAnagrams(std::string s1, std::string s2) {
    std::sort(s1.begin(), // Points to l
              s1.end()); // Points past n
    std::sort(s2.begin(), 
              s2.end());
    return s1 == s2;
}

// Test case
int main() {
    std::string a = "listen", b = "silent";
    bool result = areAnagrams(a, b);
    std::cout << "Test case: \"listen\", \"silent\" | Expected: true | Got: " << (result ? "true" : "false") << std::endl;
    return 0;
}

