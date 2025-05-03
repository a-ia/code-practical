#include <iostream>
#include <string>

int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            ++count;
        }
    }
    return count;
}

int main() {
    std::string input = "Hello World";
    int result = countVowels(input);
    std::cout << "Test case: \"Hello World\" | Expected: 3 | Got: " << result << std::endl;
    return 0;
}

