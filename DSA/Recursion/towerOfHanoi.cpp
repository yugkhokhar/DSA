#include<bits/stdc++.h>

using namespace std;


void towerOfHanoi(int n,char src,char helper,char destination){
   if(n==0) return;
   towerOfHanoi(n-1,src,destination,helper);
   cout<<"Move from"<<src<<"to"<<destination<<endl;
   towerOfHanoi(n-1,helper,src,destination);
}

int main(){
 int arr={10,15,5,10};
    cout<<isSorted(arr,4)<<endl;
    return 0;
}