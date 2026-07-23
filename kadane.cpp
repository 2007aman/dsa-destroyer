extern "C" int printf(const char*, ...);

int maxSubArray(int nums[], int n) {
    int max_so_far = nums[0];
    int curr_max = nums[0];
    
    for (int i = 1; i < n; ++i) {
        int val = nums[i];
        
        curr_max = (val > curr_max + val) ? val : curr_max + val;
        max_so_far = (max_so_far > curr_max) ? max_so_far : curr_max;
    }
    
    return max_so_far;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    int result = maxSubArray(nums, n);
    
    printf("Maximum Subarray Sum: %d\n", result);
    
    return 0;
}
