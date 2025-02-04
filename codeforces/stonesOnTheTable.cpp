#include <iostream>
#include <string>

// https://codeforces.com/problemset/problem/266/A

int main() {
    int n;
    std::string stones;
    
    // Input
    std::cin >> n;
    std::cin >> stones;
    
    // Count stones to remove
    int count = 0;
    for(int i = 1; i < n; i++) {
        if(stones[i] == stones[i-1]) {
            count++;
        }
    }
    
    // Output
    std::cout << count << std::endl;
    
    return 0;
}
