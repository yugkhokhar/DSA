#include<bits/stdc++.h>

using namespace std;



bool floydAlgo(node*&head){

node*slow=head;
node*fast=head;

while(fast!=NULL && fast->next!=NULL){

slow=slow->next;
fast=fast->next->next;

if(slow==fast) return true;

}
return false;

}

void removeCycle(node*&head){

node*slow=head;
node*fast=head;


do
{
    slow=slow->next;
    fast=fast->next->next;

} while(slow!=fast);

fast=head;
while(fast->next!=slow->next){
    slow=slow->next;
    fast=fast->next;
}
slow->next=NULL;



}






int main(){

    return 0;
}