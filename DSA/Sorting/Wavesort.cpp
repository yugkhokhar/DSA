#include<bits/stdc++.h>

using namespace std;




void Wavesort(int a[],int n){

for(int i=1;i<n;i+=2){
    if(a[i]>a[i-1]) swap(a[i],a[i-1]);
    if(a[i]>a[i+1] && i<=n-2)swap(a[i],a[i+1]);
}
}
int main(){

int a[]={10,5,1,2,8,4};
int size=sizeof(a)/sizeof(a[0]);
Wavesort(a,size);
for (int i = 0; i < size; i++)
{
    cout<<a[i]<<" ";
}


    return 0;
}