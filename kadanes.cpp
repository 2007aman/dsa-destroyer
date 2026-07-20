// kadane algo to find the maximum sum of subarray of an array
#include<iostream>
int maxsubarraysun(int arr[],int n){
int i;
int maxcurr;
i,maxcurr=arr[0];
int totalsum=arr[0];
for(i=0;i<n;i++){
maxcurr=std::max(arr[i],arr[i]+maxcurr);
if(maxcurr>totalsum){
totalsum=maxcurr;
}
}
return totalsum;

}
int main(){
int t,n;
std::cin>>n;
while(t--){
int a[n];
for(int i=0;i<n;i++)
std::cin>>a[i];
std::cout<<maxsubarraysun(a,n)<<std::endl;
}
}
