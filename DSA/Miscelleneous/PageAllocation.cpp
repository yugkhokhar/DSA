#include<bits/stdc++.h>


using namespace std;

bool isFeasible(int mid,int arr[],int n,int m){
int sum=0;
int studentreq=1;
for (int i = 0; i < n; i++)
{
    
if(arr[i]>mid) return false;
if(arr[i]+sum>mid)
{
studentreq++;
sum=arr[i];
if(studentreq>m) return false;
} 
else{
    sum+=arr[i];
}

}
return true;


}



int PageAllocation(int arr[],int n,int m){
int sum=0;
if(n<m) return -1;
for (int i = 0; i < n; i++) sum+=arr[i];
    int start=0;
int end=sum;
    int ans=INT_MAX;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(isFeasible(mid,arr,n,m)){
              ans=min(ans,mid);
                end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
return ans;
}


int main(){
int arr[]={12,34,67,90};
int n=4,m=2;
cout<<PageAllocation(arr,n,m)<<endl;



    return 0;
}