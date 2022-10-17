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



void reverseItr(node*&head){

node*prev=NULL;
node*currptr=head;
node*nextptr;

while(currptr!=NULL){
    nextptr=currptr->next;
    currptr->next=prev;
    prev=currptr;
    currptr=nextptr;
}

head=prev;

}


node*reccuresive(node*&head){

if(head==NULL ||head->next==NULL) return head;
node*newhead=reccuresive(head->next);
head->next->next=head;
head->next=NULL;
return newhead;
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
/* reverseItr(head);
 */
 node*newhead=reccuresive(head);
 display(newhead);


    return 0;
}