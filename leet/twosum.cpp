#include <vector>
#include <iostream>

class twosum {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {

    std::vector<int> target_indicies;

    for (int i = 0; i < nums.size(); i++) {
      for(int j = i+1; j < nums.size(); j++) {

        if(nums.at(i)+ nums.at(j) == target) {
          target_indicies.push_back(i);
          target_indicies.push_back(j);
          break;
        }
      }
    }
    return target_indicies;
    }
};

int main() {
  std::vector<int> nums = {2, 7, 11, 15, 7};
  int target = 9;
  
  twosum solution;
  std::vector<int> result = solution.twoSum(nums, target);
  
  std::cout << "Indices: [";
  for (size_t i = 0; i < result.size(); i++) {
    std::cout << result[i];
    if (i < result.size() - 1) std::cout << ", ";
  }
  std::cout << "]" << std::endl;
  
  return 0;
}

