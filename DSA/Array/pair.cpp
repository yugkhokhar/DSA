#include<bits/stdc++.h>

int main(){

int n;cin>>n;
int sum;cin>>sum;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}

int low=0;
int high=n-1;
while(low<high){
    if(a[low]+a[high]==sum) {
        cout<<true<<endl;
        return 0;
    }
    else if(a[low]+a[high]>sum){
        high--;
    }
    else{
        low++;
    }
}
cout<<false<<endl;
    return 0;
}