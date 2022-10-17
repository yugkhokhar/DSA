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

void insertHead(node*&head,int value)
{
node*newnode=new node(value);
newnode->next=head;
head=newnode;
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
insertail(head,20);
insertail(head,30);
insertail(head,40);
insertHead(head,50);
insertHead(head,60);
display(head);



    return 0;
}