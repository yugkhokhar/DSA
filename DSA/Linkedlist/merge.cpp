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

node*merge(node*&head1,node*&head2){
node*temp1=head1;
node*temp2=head2;
node*dumpnode=new node(-1);
node*temp3=dumpnode;
while(temp1!=NULL && temp2!=NULL)
{
    if(temp1->data < temp2->data){
        temp3->next=temp1;
        temp1=temp1->next;
    }
    else{
        temp3->next=temp2;
        temp2=temp2->next;
    }
    temp3=temp3->next;
}

while (temp1!=NULL) 
{
     temp3->next=temp1;
     temp1=temp1->next;
     temp3=temp3->next;
}

while (temp2!=NULL) 
{
     temp3->next=temp2;
     temp2=temp2->next;
     temp3=temp3->next;
}
return dumpnode->next;
}

node*mergerecursive(node*&head1,node*&head2){

node*result;
if(head1){
    return head2;
}
if(head2==NULL) return head1;


        if(head1->data<head2->data){
            result=head1;
            result->next=mergerecursive(head1->next,head2);
        }else{
            node*result=head2;
            result->next=mergerecursive(head1,head2->next);
        }




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