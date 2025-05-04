#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

// Function to check if a substring matches the given pattern
int checkForPattern(const std::string& pattern, const std::string& source, int startIndex) {
    // Set of vowels
    std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    
    for (int offset = 0; offset < pattern.length(); offset++) {
        if (pattern[offset] == '0') {
            // Pattern expects a vowel
            if (vowels.find(source[startIndex + offset]) == vowels.end()) {
                return 0; // Not a vowel
            }
        } else {
            // Pattern expects a consonant
            if (vowels.find(source[startIndex + offset]) != vowels.end()) {
                return 0; // Not a consonant
            }
        }
    }
    return 1; // Pattern matches
}

// Main solution function
int solution(const std::string& pattern, const std::string& source) {
    int answer = 0;
    
    // Check all possible starting positions
    for (int startIndex = 0; startIndex <= source.length() - pattern.length(); startIndex++) {
        answer += checkForPattern(pattern, source, startIndex);
    } // For each position, calls checkForPattern and adds the result to the answer.
    
    return answer;
}

int main() {
    // Test case
    std::string pattern = "010";
    std::string source = "amazing";
    
    int result = solution(pattern, source);
    
    std::cout << "Pattern: " << pattern << std::endl;
    std::cout << "Source: " << source << std::endl;
    std::cout << "Number of matching substrings: " << result << std::endl;
    
    return 0;
}
