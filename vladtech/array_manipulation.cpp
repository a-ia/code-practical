/* Given an array a, your task is to output an array b of the same length by applying the following transformation: 
* – For each i from 0 to a.length - 1 inclusive, b[i] = a[i - 1] + a[i] + a[i + 1]
* – If an element in the sum a[i - 1] + a[i] + a[i + 1] does not exist, use 0 in its place
* – For instance, b[0] = 0 + a[0] + a[1]
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<int> arrayManipulation(const std::vector<int>& a) {
  
  int n = a.size(); // // Gets the size of the input vector and stores it in variable n
  std::vector<int> b(n, 0); //// New vector 'b' which n elements, initialized to 0
  // Loop through each index of the input vector
  for (int i = 0; i < n; i++) {
  

    // Add current element
    b[i] = a[i]; // Set b[i] to the value of the current element in nums
    
    // Add previous element if existo
    if (i > 0) {
      b[i] += a[i - 1];
    }
      
    // Annnd add next element if it exists
    if (i < n - 1) {
      b[i] += a[i + 1];
    }
  }
  return b;
}

// Test case
int main() {

    std::vector<int> a = {1, 2, 3, 4, 5};  // Create a test vector with 5 elements
    std::vector<int> result = arrayManipulation(a);

      // Print result
    std::cout << "Input: [1, 2, 3, 4, 5]" << std::endl;
    std::cout << "Output: [";  
    for (size_t i = 0; i < result.size(); i++) { 
        std::cout << result[i];  
        if (i < result.size() - 1) std::cout << ", "; 
    }
    std::cout << "]" << std::endl;
}


