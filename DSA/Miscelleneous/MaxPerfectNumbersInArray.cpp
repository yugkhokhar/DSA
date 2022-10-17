#include<bits/stdc++.h>

using namespace std;


int maxsum(int arr[],int k,int n){
    if(k>n) return -1;
    int res=0,sum=0;

    for (int i = 0; i < k; i++)
    {
        res+=arr[i];
    }


for (int i = k; i < n; i++)
{
 sum+=arr[i]-arr[i-k];
 res=max(res,sum);   
}
return res;

}



bool isPerfectNumber(int n){

int divisorsum=1;

for (int i = 2; i <sqrt(n) ; i++)
{
    if(n%i==0){
        if(i==n/i){
            sum+=i;
        }else{
            sum+=i+n/i;
        }
    }
}


if(sum==n && n!=1) return true;
return false;



}



int maxperfectnumbers(int arr[],int k,int n){

for (int i = 0; i < n; i++)
{
    if(isPerfectNumber(arr[i])){
        arr[i]=1;
    }else{
        arr[i]=0;
    }
}

return maxSum(arr,k,n);

}



int main(){
    return 0;
}