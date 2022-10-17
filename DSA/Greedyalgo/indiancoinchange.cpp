#include<bits/stdc++.h>

using namespace std;

int  main()
{

int n;
cin>>n;
vector<int>v1(n);

for(int i=0;i<n;i++)
{
    cin>>v1[i];
}


sort(v1.begin(),v1.end(),greater<int>());
int k;
cin>>k;
int ans=0;
for(int i=0;i<n;i++)
{
    ans+=k/v1[i];
    k-=k/v1[i] *v1[i];
}

cout<<ans<<endl;




return 0;
}