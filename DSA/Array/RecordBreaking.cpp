#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
    cin>>n;
int ans=0;
int mx=-1;

int arr[n+1];
arr[n]=-1;

for (int i = 0; i < n; i++)
{
    cin>>a[i];
}



for (int i = 0; i < size; i++)
{
    if(a[i]>mx && a[i]>a[i+1]){
        ans++;
    }
   mx=max(a[i],mx);
}

cout<<ans<<endl;





    return 0;
}