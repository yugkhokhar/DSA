#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
vector<int>a(n);

for(auto &i:a)
{
    cin>>i;
}

sort(a.begin(),a.end());

int min=0;
int max=0;

for(int i=0;i<n/2;i++)
{
    max+=a[n-i-1]-a[i];
    min+=a[2*i+1]-a[2*i];
}
cout<<max<<" "<<min;
    return 0;
}