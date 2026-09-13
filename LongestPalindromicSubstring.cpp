#include <iostream>
#include <string>

using namespace std;
/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        string result;
        string temp;
        // 1.单个字符是回文数
        // 2.若s[i...j]是回文序列，那么s[i-1...j-1]也一定是回文序列
        for (int i = 0; i < s.size(); i++) {
            // 奇数长度回文
            int left = i, right = i;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                left--;
                right++;
            }
            temp = s.substr(left + 1, right - left - 1);
            if (temp.size() > result.size()) {
                result = temp;
            }

            // 偶数长度回文
            left = i, right = i + 1;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                left--;
                right++;
            }
            temp = s.substr(left + 1, right - left - 1);
            if (temp.size() > result.size()) {
                result = temp;
            }
        }

        return result;
    }
};
// @lc code=end

int main() {
    string s = "abaab";
    Solution sol;
    cout << sol.longestPalindrome(s) << endl;
    return 0;
}