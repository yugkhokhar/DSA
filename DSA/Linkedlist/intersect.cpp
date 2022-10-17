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

void intersect(node*&head1,node*&head2,int pos){
node*temp1=head1;
node*temp2=head2;

while(pos--){
    temp1=temp1->next;
}
while(temp2->next!=NULL) temp2=temp2->next;

temp2->next=temp1;
}




int intersectiondata(node*&head1,node*&head2){
node*temp1;
node*temp2;
int l1=length(head1);
int l2=length(head2);
int d=0;
if(l1>l2){
    d=l1-l2;
    temp1=head1;
    temp2=head2;
}
else{
    d=l2-l1;
    temp1=head2;
    temp2=head1;
}


while(d){
    temp1=temp1->next;
    if(temp1==NULL) return -1;
    d--;
}

while(temp1!=NULL && temp2!=NULL){

if(temp1==temp2) return temp1->data;
temp1=temp1->next;
temp2=temp2->next;

}
return -1;



}

int main(){

node*head1=NULL;
node*head2=NULL;
for (int i = 1; i <= 6; i++)
{
    insertail(head1,i);
}

for (int i = 6; i <= 9; i++)
{
    insertail(head2,i);
}
display(head1);
cout<<endl;
display(head2);
cout<<endl;
intersect(head1,head2,3);
display(head1);
cout<<endl;
display(head2);
cout<<endl;
cout<<intersectiondata(head1,head2)<<endl;



    return 0;
}