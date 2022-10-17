#include<bits/stdc++.h>

using namespace std;


int kadene(int arr[],int n){
    int currsum=0,maxsum=INT_MIN;

    for (int i = 0; i < n; i++)
    {
       currsum+=a[i];
       if(currsum<0) currsum=0; 
         maxsum=max(maxsum,currsum);
    }
   return maxsum; 
}




int main(){

int n;cin>>n;

for (int i = 0; i < n; i++)
{
    cin>>a[i];
}

int nonwrapsum=kadene(a,n);

int totalSum=0;
for (int i = 0; i < n; i++)
{
    totalSum+=a[i];
    a[i]=-a[i];
}

int nonContriElementSum=-kadene(a,n);

int wrapsum=totalSum-nonContriElementSum;


cout<<max(nonwrapsum,wrapsum)<<endl;


    return 0;
}