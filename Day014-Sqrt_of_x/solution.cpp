// Day 14: Sqrt(x)
// Difficulty: Easy
// Link: https://leetcode.com/problems/sqrtx
// Date: October 6, 2025
// Time Complexity: O(log n)
// Space Complexity: O(1)
// Approach: Binary search on the range [1, x] to find the largest integer k where k * k <= x.  Check the middle value each iteration and adjust the search range based on whether mid^2 is too large, too small, or exact.  Store valid candidates as we search.
// Key Insight: Use division (mid == x / mid) instead of multiplication (mid * mid == x) to avoid integer overflow.  The square root must exist somewhere in [1, x], and this range is sorted, making binary search applicable.

class Solution {
public:
    int mySqrt(int x) {
    if (x == 0 || x == 1) return x;

    int left = 1;
    int right = x;
    int result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid == x / mid) {
            return mid;
        }
        else if (mid < x / mid) {
            result = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return result;
    }
};
