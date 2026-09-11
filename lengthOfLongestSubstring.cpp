#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res;
        vector<int> temp;
        int flag = 0;
        if (s == "") return 0;
        for (int i = 0; i < s.length(); i++) {
            temp.push_back(1);
            string tempstr = string{s[i]};
            for (int j = i + 1; j < s.length(); j++) {
                if (tempstr.find(s[j]) == string::npos) {
                    tempstr += s[j];
                    temp[flag]++;
                } else {
                    break;
                }
            }
            flag++;
        }

        return *max_element(temp.begin(), temp.end());
    }
};
// @lc code=end
int main() {
    Solution s;
    cout << s.lengthOfLongestSubstring("pwwkew");
    return 0;
}