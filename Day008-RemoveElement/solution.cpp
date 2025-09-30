// Day 8: Remove Element
// Difficulty: Easy
// link: https://leetcode.com/problems/remove-element/
// Date: September 30, 2025
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Two-pointer technique - scans with i, writes non-matching elements at k
// Key Insight: Overwrites array with elements that don't match val, effectively "removing" them without actual deletion

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        int k = 0;

        for (int i = 0; i < length; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k = k+1;
            }
        }
        return k;
    }
};

