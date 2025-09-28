// Day 5: Valid Parentheses
// Difficulty: Easy
// link: https://leetcode.com/problems/valid-parentheses/
// Date: September 27, 2025
// Time Complexity: O(n)
// Space Complexity: O(n)
// Approach: Stack-based matching using vector, process each character sequentially
// Key Insight: LIFO principle ensures most recent opening bracket matches current closing bracket

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            
            // If opening bracket, push to stack
            if (c == '(' || c == '[' || c == '{') {
                stack.push_back(c);
            }
            // If closing bracket, check for match
            else if (c == ')' || c == ']' || c == '}') {
                // If stack is empty, no opening bracket to match
                if (stack.empty()) {
                    return false;
                }
                
                // Get the most recent opening bracket
                char top = stack.back();
                stack.pop_back();
                
                // Check if they match
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false;
                }
            }
        }
        
        // Valid only if all brackets were matched (stack is empty)
        return stack.empty();
    }
};
