// Day 4: Longest Common Prefix
// Difficulty: Easy
// link: https://leetcode.com/problems/longest-common-prefix/
// Date: September 26, 2025
// Time Complexity: O(S)
// Space Complexity: O(1)
// Approach: Character by character comparison across all strings with bounds checking
// Key Insight: Compare same position across all strings, stop on first mismatch or bounds violation

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string result;

        for (int pos = 0; pos < strs[0].size(); pos++) {
            char firstChar = strs[0][pos];
    
            for (int i = 1; i < strs.size(); i++) {
                if (pos >= strs[i].size() || strs[i][pos] != firstChar) {
                    return result;
                }
            }
            result += firstChar;
        }
        return result;
    }
};
