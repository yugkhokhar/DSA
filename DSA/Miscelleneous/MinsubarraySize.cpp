#include<bits/stdc++.h>

using namespace std;



int MinSubArraySize(int arr[],int n,int k){

int sum=0,minlength=n+1,start=0,end=0;

while(end<n){

while(sum<=x && end<n){
    sum+=arr[end++];
}

while(sum>x && start<n){
if(end-start<minlength) minlength=end-start;
    sum-=arr[start++];
}
}

return minlength;
}




int main(){

int arr[]={10,20,3,5,7,8};
int k=20;
int size=6;


int length=MinSubArraySize(arr,size,k);
if(length==n+1) cout<<"No Subarray found";
else {
    cout<<length<<endl;
}


    return 0;

}