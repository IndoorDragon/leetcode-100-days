// Day 6: Merge Two Sorted Lists
// Difficulty: Easy
// link: https://leetcode.com/problems/merge-two-sorted-lists
// Date: September 28, 2025
// Time Complexity: O(n+m)
// Space Complexity: O(1)
// Approach: Two-pointer technique with dummy head to merge two sorted links
// Key Insight: Since both lists are already sorted, we only need to compare the current front elements and reuse existing nodes instead of creating new ones

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            }
            else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        if (list1) {
            current->next = list1;
        }
        else {
            current->next = list2;
        }
        return dummy->next;
    }
};
