#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;






int main(){
int n;
cin>>n;
int a[n];
map<int,int>mp;
rep(i,0,n){
    cin>>a[i];
    mp[a[i]]++;
}

map<int,int>::iterator it;
for(it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}





    return 0;
}