#include<bits/stdc++.h>

int main(){


int a[]={10,20,30,40,50,60,70,870};
int size=sizeof(a)/sizeof(a[0]);

int ans=2;
int current=2;
int pd=a[1]-a[0];
int j=2;
while (j<n)
{
    if(pd==a[j]-a[j-1]){
        current++;
    }
    else{
        current=2;
    }
    ans=max(ans,current);
    j++;
    
}
cout<<ans<<endl;










    return 0;
}