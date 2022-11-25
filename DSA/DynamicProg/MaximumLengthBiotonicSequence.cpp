#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
using namespace std;



int main()
{
int n;cin>>n;
vi a(n);
  rep(i,0,n) cin>>a[i];
  vi forward(n,1);
  vi backward(n,1);
 
 rep(i,0,n){

      rep(j,0,i){

        if(a[i]>a[j]){
            forward[i]=max(forward[i],1+forward[j]);
        }

    }


 }
 
 
for (int i = n-1; i>=0; i--)
{
    for (int j = n-1; j>i; j--)
    {
        if(a[i]>a[j]){
            backward[i]=max(backward[i],1+backward[j]);
        }
    }
} 
 
 int ans=0;
 rep(i,0,n) ans=max(ans,forward[i]+backward[i]-1);
 cout<<ans<<endl;
    return 0;
}