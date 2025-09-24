// Day 1: Two Sum
// Difficulty: Easy
// Link: https://leetcode.com/problems/two-sum/
// Date: September 23, 2025
// Time Complexity: O(n²), Space Complexity: O(1)
// 
// Approach: Brute force - check all pairs
// Key insight: Simple nested loop solution, easy to understand

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Check every pair of numbers
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // Never reached given problem constraints
    }
};
