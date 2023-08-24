#include <algorithm>
#include <vector>

std::vector<int> solution(std::vector<int> nums) {
  int n = sizeof(nums) / sizeof(nums[0]);

  std::sort(nums.begin(), nums.end());
  return nums;
}
