#include <iostream>
int findmin(int A[],int LB, int UB,int n){
int min=A[LB];
for(int k=LB+1;k<=UB;k++){
if(min>A[k]){
min=A[k];
}
}
return min;
}
int main(){
int n=9;
int A[n]={11,3,4,5,3,2,6,4,66};
int j=findmin(A,0,n-1,n);
std::cout<<j<<std::endl;
return 0;
}


