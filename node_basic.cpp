#include <iostream>
struct Node{
int data;
Node* next;

}
int main(){
Node* head=new Node();
head->data=100;
head->next=nullptr;

std::cout<<"first element"<< head->data<<endl;
return 0;
}

