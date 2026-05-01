#include <iostream>
struct node{
int data;
node* next ; 
};
int main(){
node *first=new node;
node *second=new node;
node *third=new node;

first->data=20;
first->next=second;

second->data=40;
second->next=third;

third->data=50;
third->next=NULL;

node* p=first;

std::cout<<"there are three elements of linked list "<<std::endl;

while(p!=NULL){
std::cout<<"data"<<p->data<<std::endl;
p=p->next;
}
return 0;
}
