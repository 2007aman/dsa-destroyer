//A PROGRAM TO CONSTRUCT A NODE IF THE NEXT NODE IS NULL
#include <iostream>
#include <map>
class node
{
public:
int data;
node* next;

//to construct

node(int d){
this->data=d;
this->next=NULL;
}

node(){
int value=this->data;
if(this->next!=NULL){
delete next;
next=NULL;
}
std::cout<<"memory is free for node with data"<<value<<std::endl;
}
};
int main(){
node* head=new node(10);
head->next=new node(20);
std::cout<<"the linked list is successfully created"<<std::endl;
delete head;
return 0;
}
