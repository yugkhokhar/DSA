#include<bits/stdc++.h>

using namespace std;

int  main()
{

int n;cin>>n;
int number;cin>>number;

vector<int>a(n);

for (int i = 0; i < n; i++)
{
    cin>>a[i];
}


sort(a.begin(),a.end(),greater<int>());
int ans=0;
for(int i=0;i<n;i++){
ans+=number/a[i];
number=number-(number/a[i])*a[i];
}
cout<<ans;



return 0;
}