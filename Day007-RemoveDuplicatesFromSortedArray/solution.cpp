// Day 7: Remove Duplicates From Sorted Array
// Difficulty: Easy
// link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Date: September 29, 2025
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Two-pointer technique - one pointer scans, one pointer writes unique values
// Key Insight: Since the array is sorted, duplicates are adjacent.  Compare each element with the previous one and only write when different.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        int k = 1;

        for (int i = 1; i < length; i++) {
            if (nums[i] != nums[i-1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
