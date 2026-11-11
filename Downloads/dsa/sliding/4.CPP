// TO CONVERT A SUBSTRING INTO ONLY ONE CHARACTER STRING AND K WILL TELL HOW MUCH CHARACTERS U CAN CHANGE
#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int CHARCOUNT(vector<int>a){
    int maxc=-1;
    for( int i=0;i<256;i++){
        maxc=max(maxc,a[i]);
        return maxc;
    }
}
int charreplacement(string s,int k){
    int high=0;
    int low=0;
    int n=s.size();
    int res=INT_MIN;
     unordered_map<char, int> f;
    
    for(high=0;high<n;high++){
        f[s[high]]++;
        int maxcnt=find(f);  // find function is used to the find the maximum frequency of a character
        int len=high-low+1;
        int diff=maxcnt-len;
        while(diff>k){
            f[s[low]]--;
            low++;
            maxcnt=find(f);
            len=high-low+1;
            diff=len-maxcnt;
        }
        len=high-low+1;
        res=max(res,len);
    }
    return res;
}
int main(){
    string s="aannss";
    cout<<"the string is \n"<<s<<"the k is \n"<<k<<(s,1);
}
