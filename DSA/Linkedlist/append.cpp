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

void insertail(node*&head,int val){

node*newnode=new node(val);
if(head==NULL) {head=newnode;return;}

node*temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newnode;

}

void display(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}




int length(node*head){
    int length=0;


while(head!=NULL) {
    length++;
    head=head->next;
}
return length;

}

void kappend(node*&head,int k){

node*newhead;
node*newtail;
node*tail=head;
int count=1;
int l=length(head);
k=k%l;
while(tail->next!=NULL){

    if(count==l-k)
    {
        newtail=tail;
    }
    if(count==l-k+1){
        newhead=tail;
    }
    tail=tail->next;
    count++;
}

newtail->next=NULL;
tail->next=head;

head=newhead;
}



int main(){

node*head=NULL;
for (int i = 1; i <= 6; i++)
{
    insertail(head,i);
}

display(head);
kappend(head,3);
cout<<endl;
display(head);


    return 0;
}