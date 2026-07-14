#include <iostream>
#include <cmath>

void leftrotate(int arr[],int d,int n){
int temp[d];
for(int i=0;i<d;i++){
     temp[i]=arr[i];
}
for(int i=d;i<n;i++){
arr[i-d]=arr[i];
}
for(int i=0;i<d;i++){
arr[n-d+1]=temp[i];

}

}
int main(){
int arr[]={1,2,3,4,5};
std::cout<<"before left rotation";
int n;
int d;
int i;
for( i=0;i<n;i++){
std::cout<<arr[i]<<" ";
}
std::cout<<std::endl;
leftrotate(arr,d,n);
for( i=0;i<n;i++){
std::cout<<arr[i]<<" ";
}
}

