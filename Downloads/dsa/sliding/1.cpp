// to find the max sum in a subarray of 2 elements out of a one single array
#include <iostream>
#include <algorithm>
using namespace std;

int ktar(int arr[], int n) {
    int low = 0;
    int high = 1;
    int sum = 0;
    
    for (int i = low; i <= high; i++) {
        sum = sum + arr[i];
    }

    int res = sum;

    while (high < n) {
        res = max(res, sum);
        low++;
        high++;
        
        if (high == n) {
            break;
        }
        
        sum = sum - arr[low - 1];
        sum = sum + arr[high];
    }
    
    return res;
}

int main() {
    int arr[4] = {23, 54, 45, 4};
    cout << ktar(arr, 4);
    return 0;
}