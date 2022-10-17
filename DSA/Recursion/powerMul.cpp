#include<bits/stdc++.h>

using namespace std;


int poweMul(int n,int p){
    if(p==0) return 1;
    return n*poweMul(n,p-1);
}

int main(){
    int n;cin>>n;
    int p;cin>>p;
    cout<<poweMul(n,p)<<endl;
    return 0;
}