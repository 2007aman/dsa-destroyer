// to find the length of the longest substring with exactly k unique characters

#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <climits>
using namespace std;

int longestKSubstr(string &s, int k) {
    int low = 0;
    int res = -1; // Directly -1 se initialize kar sakte hain
    int n = s.size();
    unordered_map<char, int> f;

    for (int high = 0; high < n; high++) {
        f[s[high]]++;

        // Window shrink karo jab unique characters 'k' se bada ho jayein
        while (f.size() > k) {
            f[s[low]]--;
            if (f[s[low]] == 0) {
                f.erase(s[low]);
            }
            low++;
        }

        // Jab exact 'k' unique characters mil jayein
        if (f.size() == k) {
            int len = high - low + 1;
            res = max(res, len);
        }
    }

    return res;
}

int main() {
    string s = "aabacbebebe";
    int k = 3;
    cout << longestKSubstr(s, k) << endl; // Output: 7 ("cbebebe")
    return 0;
}