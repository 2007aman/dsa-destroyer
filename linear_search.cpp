#include<iostream>
int searching(int A[],int UB,int LB,int item){
for(int k=LB;k<=UB;k++){
if( item==A[k]){
return k;
}
}
return LB-1;
}
int main(){
int A[6]={3,4,5,6,2,3};
int j=searching(A,5,0,5);
std::cout<<j<<std::endl;
}
