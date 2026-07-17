#include<iostream>
void move(int arr_size,int arr[]){
int j=0;
for(int i=0;i<arr_size;i++){
if(arr[i]<j){
std::cout<<"found negative number"<<std::endl;
}
else{
std::cout<<"found positive number"<<std::endl;
}
}
}
int main(){
int arr_size=6;
int arr[6]={1,3,-3,3,-2,-23};
move(4,arr);
}
