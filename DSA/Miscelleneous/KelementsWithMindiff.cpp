#include<bits/stdc++.h>


using namespace std;

bool isFeasible(int mid,int arr[],int n,int k){

int pos=arr[0],element=1;
for (int i = 0; i < n; i++)
{
    if(arr[i]-pos>=mid) {
        pos=arr[i];
        element++;
        if(element==k){
            return true;
        }
    }
}
return false;


}



int MinDiffKele(int arr[],int n,int k){
    int left=a[0],last=a[n-1];
    int result=-1;
    while (left<last)
    {
        int mid=(left+last)/2;
        if(isFeasible(mid,arr,n,k)){
              result=max(result,mid);
                left=mid+1;
        }
        else{
            last=mid;
        }

    }
return result;
}


int main(){

int n;
cin>>n;
cout<<sieve(n)<<endl;



    return 0;
}