
//this program is for the insertion at the beginning of the linked list
#include <iostream>
struct node{
int data;
node* next;

};
int main(){
node* n=new node;
node* start=new node;

start->data=50;
start->next=NULL;

n->data=90;
n->next=start;
start=n;
if(n==NULL){
std::cout<<"memory full"<<std::endl;
}
else{
std::cout<<"data is entered"<<std::endl;
std::cout<<"data that is entered"<< start->data<<std::endl;
std::cout<<"data that  is entered"<< start->next->data<<std::endl;
}
return 0;


}
