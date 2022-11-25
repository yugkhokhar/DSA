#include<bits/stdc++.h>

using namespace std;

int main(){
int n;cin>>n;
vector<int>v(n);

for (int i = 0; i < n; i++)
{
    cin>>v[i];
}


vector<int>jumps(n,INT_MAX);
if(v[0]==0) return INT_MAX;

jumps[0]=0;
for (int i = 1; i < n; i++)
{
    for (int j = 0; j<i; j++)
    {
        if(i<=(j+v[j])){
            jumps[i]=min(jumps[i],jumps[j]+1);
        }
        
    }
}
cout<<jumps[n-1];


    return 0;
}