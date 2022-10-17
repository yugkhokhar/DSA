#include<bits/stdc++.h>


using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};


void insertail(node*&head,int value)
{
node*newnode=new node(value);
if(head==NULL){
    head=newnode;
    return;
}

node*temp=head;
while (temp->next!=NULL)
{
    temp=temp->next;
}

temp->next=newnode;

}


void putEvenAfterOdd(node*&head){

node*odd=head;
node*even=head->next;
node*evenstart=even;


while(odd->next!=NULL && even->next!=NULL){


if(even->next!=NULL){

    odd->next=even->next;
    odd=odd->next;
}
if(odd->next!=NULL){

    even->next=odd->next;
    even=even->next;
}
}
odd->next=evenstart;
if(even->next!=NULL){
even->next=NULL;
}
}


void display(node*head){
    node*temp=head;
while(head!=NULL){
    cout<<head->data<<"->";
    head=head->next;
}
cout<<"NULL"<<endl;

}







int main(){
node*head=NULL;
insertail(head,10);
insertail(head,40);
insertail(head,30);
insertail(head,20);
insertail(head,50);
insertail(head,60);
insertail(head,70);
display(head);
putEvenAfterOdd(head);
display(head);
    return 0;
}