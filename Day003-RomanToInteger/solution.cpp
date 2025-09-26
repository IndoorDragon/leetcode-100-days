// Day 3: Roman to Integer
// Difficulty: Easy
// Link: https://leetcode.com/problems/roman-to-integer/
// Date: September 25, 2025
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: One pass through the string, check for special cases first.
// Key Insight: else if statements prevent double processing.

class Solution {
public:
    int romanToInt(string s) {

        int length = s.size();
        int digit;
        int result = 0;

        for (int i = 0; i < length; i++) {
            if (s.at(i) == 'I') {
                if ((i + 1 < length) && (s.at(i+1) == 'V')) {
                    digit = 4;
                    result = result + digit;
                    i++;
                }
                else if ((i + 1 < length) && (s.at(i+1) == 'X')) {
                    digit = 9;
                    result = result + digit;
                    i++;
                }
                else { 
                    digit = 1;
                    result = result + digit;
                }
            }
            else if (s.at(i) == 'V') {
                digit = 5;
                result = result + digit;
            }
            else if (s.at(i) == 'X') {
                if ((i + 1 < length) && (s.at(i+1)) == 'L') {
                    digit = 40;
                    result = result + digit;
                    i++;
                }
                else if ((i + 1 < length) && (s.at(i+1) == 'C')) {
                    digit = 90;
                    result = result + digit;
                    i++;
                }
                else {
                    digit = 10;
                    result = result + digit;
                }
            }
            else if (s.at(i) == 'L') {
                digit = 50;
                result = result + digit;
            }
            else if (s.at(i) == 'C') {
                if ((i + 1 < length) && (s.at(i+1) == 'D')) {
                    digit = 400;
                    result = result + digit;
                    i++;
                }
                else if ((i + 1 < length) && (s.at(i+1) == 'M')) {
                    digit = 900;
                    result = result + digit;
                    i++;
                }
                else {
                    digit = 100;
                    result = result + digit;
                }
            }
            else if (s.at(i) == 'D') {
                digit = 500;
                result = result + digit;
            }
            else if (s.at(i) == 'M') {
                digit = 1000;
                result = result + digit;
            }
        }
        return result;
    }
};
