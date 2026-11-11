#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countTripletsSmallerThanTarget(vector<int>& nums, int target) {
    int n = nums.size();
    int count = 0;

    // Step 1: Sort the array
    sort(nums.begin(), nums.end());

    // Step 2: Iterate through the array
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        // Step 3: Two Pointers search
        while (left < right) {
            int current_sum = nums[i] + nums[left] + nums[right];

            if (current_sum < target) {
                // If current_sum < target, all elements between left and right form a valid triplet
                count += (right - left);
                left++; // Move left pointer forward
            } else {
                right--; // Sum is too large, decrease right pointer
            }
        }
    }

    return count;
}

int main() {
    vector<int> nums = {-2, 0, 1, 3};
    int target = 2;

    cout << "Count of triplets: " << countTripletsSmallerThanTarget(nums, target) << endl;
    return 0;
}
