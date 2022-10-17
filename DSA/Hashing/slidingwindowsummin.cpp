#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
  vector<int>a(n);  

for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int sum=0;
int ans=INT_MAX;
for(int i=0;i<k;i++)
{
 sum+=a[i];
}
ans=min(ans,sum);

for(int i=k;i<n;i++)
{
    sum-=a[i-k];
    sum+=a[i];
    ans=min(ans,sum);
}
cout<<ans;



return 0;
} 