// Day 13: Add Binary
// Difficulty: Easy
// Link: https://leetcode.com/problems/add-binary
// Date: October 5, 2025
// Time Complexity: O(max(n, m))
// Space Complexity: O(max(n, m))
// Approach: Two-pointer method with carry propagation
// Key Insight: Binary addition follows the same rules as decimal addition

class Solution {
public:
    string addBinary(string a, string b) {
    string result = "";
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }

        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }

        result = char('0' + sum % 2) + result;
        carry = sum / 2;
        }

    return result;
    }
};

