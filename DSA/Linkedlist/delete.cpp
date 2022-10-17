#include<bits/stdc++.h>

using namespace std;

void deleteAthead(node*&head){
    if(head==NULL) return;
node*temp=head;

    head=head->next;
delete temp;
}


void deleteAnode(node*&head,int val){

node*temp=head;

if(head->next==NULL){
deleteAthead(head)
}

while(head->next->data!=val){
    head=head->next;
}

node*todelete=head->next;
head->next=head->next->next;
delete todelete;

}


int main(){
    return 0;
}