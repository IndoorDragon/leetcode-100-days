// Day 9:
// Difficulty: Easy
// Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Date: October 1, 2025
// Time Complexity: O(n*m)
// Space Complexity: O(1)
// Approach: Brute force string matching with nested loops
// Key Insight: For each position in haystack, check if needle matches starting there.  Use (j-i) to map haystack index to needle index.

class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystackLength = haystack.size();
        int needleLength = needle.size();
        int result = -1;

        for (int i = 0; i < haystackLength; i++) {
            if (haystack[i] != needle[0]) {
                continue;
            }
            
            int j;
            for (j = i; j < haystackLength && (j - i) < needleLength; j++) {
                if (haystack[j] != needle[j - i]) {
                    result = -1;
                    break;
                }
            }
            if ((j - i) == needleLength) {
                result = i;
                break;
            }
        }
        return result;
    }
};
