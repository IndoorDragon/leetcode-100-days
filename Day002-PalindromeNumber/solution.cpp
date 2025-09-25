// Day 2: Palindrome Number
// Difficulty: Easy
// Link: https://leetcode.com/problems/palindrome-number/
// Date: September 24, 2025
// Time Complexity: O(n), Space Complexity: O(n)
// 
// Approach: Convert number to string, Use index arithmetic to compare mirror positions, early return when mismatch found.
// Key insight: The "two pointers" pattern: i goes forward, length-1-i goes backward

#include <string>

class Solution {
public:
    bool isPalindrome(int x) {

        string str = to_string(x);
        int length = str.size();

        for (int i = 0; i < length; i++) {
            char firstChar = str.at(i);
            char lastChar = str.at(length - 1 - i);

            if (firstChar == lastChar) {
                continue;
            }
            else {
                return false;
            }
        }
        return true;
    }
};
