#include<bits/stdc++.h>

using namespace std;


bool isSorted(int a[],int n){
   if(n==1) return true;
   bool restArray=isSorted(a+1,n-1);
   return (arr[0]<a[1] && restArray);
}

int main(){
 int arr={10,15,5,10};
    cout<<isSorted(arr,4)<<endl;
    return 0;
}