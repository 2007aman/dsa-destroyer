#include <iostream>
#include <set>

class Solution {
public:
    void findUnion(int arr1[], int n1, int arr2[], int n2) {
        std::set<int> s;

        for (int i = 0; i < n1; i++) {
            s.insert(arr1[i]);
        }

        for (int i = 0; i < n2; i++) {
            s.insert(arr2[i]);
        }

        std::cout << "Union of both arrays: ";
        for (auto x : s) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int l = 8;
    int m = 8;

    int arr1[8] = {1, 2, 3, 4, 4, 2, 2, 3};
    int arr2[8] = {3, 4, 5, 5, 3, 2, 4, 4};

    Solution a;
    a.findUnion(arr1, l, arr2, m);

    return 0;
}
