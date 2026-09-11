#include <iostream>
#include <vector>
using namespace std;
/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(std::vector<int> &nums, int target) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            int expect = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == expect) {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};
// @lc code=end
int main() {
    vector<int> nums = {1, 3, 5};
    int target = 8;
    Solution s;
    vector<int> res = s.twoSum(nums, target);
    for (auto const &i : res) {
        std::cout << i << std::endl;
    }
    return 0;
}