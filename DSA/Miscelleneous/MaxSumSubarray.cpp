#include<bits/stdc++.h>

using namespace std;



void maxsumSubarray(int arr[],int n,int x,int k ){
    int sum=0,ans=0;
    for (int i = 0; i < k; i++)
    {
    sum+=arr[i];    
    }
    if(sum<x) ans=sum;

    for(int i=k;i<n;i++){
        sum-=arr[i-k];
        sum+=arr[i];
        if(sum<x)
        ans=max(ans,sum);
    }


cout<<"Max Sum is :" <<ans;

}

int main(){return 0;}