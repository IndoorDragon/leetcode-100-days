// Day 15: Climbing Stairs
// Difficulty: Easy
// Link: https://leetcode.com/climbing-stairs
// Date: October 7, 2025
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Iterative dynamic programming using the Fibonacci pattern.
// Key Insight: To reach step n, you must come from either step n01 (take 1 step) or step n-2 (take 2 steps).  Thus: ways(n) = ways(n-1) + ways(n-2).  Only need to track the last two values, not the entire sequence.

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;

        int prev2 = 1;
        int prev1 = 2;
        int current;

        for (int i = 3; i <= n; i++) {
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }
        return current;
    }
};
