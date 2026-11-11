// a progrAM TO FIND THE LONGEST SUBSTRING WITH ALL UNIQUE CHARACTERS and return the length of it
#include<iostream>
#include<algorithm>
using namespace std;
int longestsubstr(string s){
    int low=0;
    int high=0;
    int n=s.size();
    Unordered_map<char,int> f;
    int res=INT_MIN;
    for(high=0;high<n;high++){
        f[s[high]]++;
        int len=high-low+1;
        while(f.size()<len){
            f[s[low]]--;
            low++;
            if(f[s[low]]==0){
                f.erase();
            }
            len=high+low-1;
        }
    len=high+low-1;
    res=max(res,len);    
}
if(res==0){
    return 0;
}
return res;
}
int main(){
    int k="aasdsdd";
    cout<<longestsubstr(k);
}
