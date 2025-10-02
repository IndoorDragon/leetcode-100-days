// Day 10: Search Insert Position
// Difficulty: Easy
// Link: https://leetcode.com/problems/search-insert-position
// Date: October 2, 2025
// Time Complexity: O(log n)
// Space Complexity: O(1)
// Approach: Binary search to find target or insertion position
// Key Insight: When binary search exits without finding target , the 'left' pointer indicates exactly where to insert the target maintain sorted order
//
// class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result;
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return left;
    }
};
