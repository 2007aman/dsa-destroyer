581. Shortest Unsorted Continuous Subarray
Solved
Medium
Topics
premium lock icon
Companies
Given an integer array nums, you need to find one continuous subarray such that if you only sort this subarray in non-decreasing order, then the whole array will be sorted in non-decreasing order.

Return the shortest such subarray and output its length.

 

Example 1:

Input: nums = [2,6,4,8,10,9,15]
Output: 5
Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.
Example 2:

Input: nums = [1,2,3,4]
Output: 0
Example 3:

Input: nums = [1]
Output: 0
 

Constraints:

1 <= nums.length <= 104
-105 <= nums[i] <= 105
 

Follow up: Can you solve it in O(n) time complexity?
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int left = -1;
        int n = nums.size();
        int right = -1;
        int max_seen = INT_MIN;
        int min_seen = INT_MAX;
        
        int i = 0;
        while (i < n) {
            max_seen = max(max_seen, nums[i]);
            if (nums[i] < max_seen) {
                right = i;
            }
            i++;
        }
        
        int j = n - 1;
        while (j >= 0) {
            min_seen = min(min_seen, nums[j]);
            if (nums[j] > min_seen) {
                left = j;
            }
            j--;
        }
        
        if (left == -1) {
            return 0;
        }
        
        return right - left + 1;
    }
};