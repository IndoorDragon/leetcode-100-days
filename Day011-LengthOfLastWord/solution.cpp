// Day 11: Length of Last Word
// Difficulty: Easy
// Link: https://leetcode.com/problems/length-of-last-word
// Date: October 3, 2025
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Traverse from end of string, skip trailing spaces, then count characters until the next space
// Key Insight: Working backwards from the end allows us to find the last word directly without parsing all words

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        int result = 0;
        while (i >= 0 && s[i] != ' ') {
            result++;
            i--;
        }
        return result;
    }
};
