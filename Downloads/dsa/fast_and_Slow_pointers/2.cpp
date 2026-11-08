#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2];
        
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                
                if (currentSum == target) {
                    return target;
                }
                
                int currentDiff;
                if (currentSum > target) {
                    currentDiff = currentSum - target;
                } else {
                    currentDiff = target - currentSum;
                }
                
                int closestDiff;
                if (closestSum > target) {
                    closestDiff = closestSum - target;
                } else {
                    closestDiff = target - closestSum;
                }
                
                if (currentDiff < closestDiff) {
                    closestSum = currentSum;
                }
                
                if (currentSum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        return closestSum;
    }
};
