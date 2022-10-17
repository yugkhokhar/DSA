#include<bits/stdc++.h>

using namespace std;
//first repeat with min index
//amazon oracle
int main(){

int n;
cin>>n;
for (int i = 0; i < n; i++)
{
cin>>a[i];    
}


const int N=1e+2;
int idx[N];
for (int i = 0; i < N; i++)
{
    idx[i]=-1;
}

int minitem=INT_MAX;

for (int i = 0; i < n; i++)
{
    
if(idx[a[i]]!=-1)
{
    minitem=min(minitem,idx[a[i]]);
}
else{
    idx[a[i]]=i;
}

}

if(minitem===INT_MAX){
    cout<<"-1"<<endl;
}
else{
    cout<<minitem+1<<endl;
}












    return 0;
}