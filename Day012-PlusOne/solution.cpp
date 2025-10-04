// Day 12: Plus One
// Difficulty: Easy
// Link: https://leetcode.com/problems/plus-one
// Date: October 4, 2025
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Traverse from right to left, handling carry propagation digit by digit
// Key Insight: Most cases only require incrementing one digit.  Only when all digits are 9 do we need to add a new digit at the front.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};
