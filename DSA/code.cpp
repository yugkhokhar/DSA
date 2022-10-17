#include <bits/stdc++.h>
using namespace std;

int main() {


int T;
cin>>T;
while(T>0)
{
    vector<pair<int,int>>v;
    int n,m,x,y;
    cin>>n>>m;
 for(int i=0;i<m;i++)
 {
     cin>>x>>y;
  v.push_back({x,y});
 }  
    sort(v.begin(),v.end(),greater<pair<int,int>>());

int k=1;
int ans=0;
int p=n;
   for(int i=0;i<m &&n>0;i++)
   {
       int f=v[i].first;
       int s=v[i].second; 
       k=(k*s)/(__gcd(k,s));
        ans+=k*(p-(n/k));
        p=n/k;
   } 
    cout<<ans<<"\n";
    T--;
}

	return 0;
}
