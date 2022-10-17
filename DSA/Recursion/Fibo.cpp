#include<bits/stdc++.h>

using namespace std;


int nFibo(int n){
    if(n==0 || n==1) return n;
    return nFibo(n-1)+nFibo(n-2);
}

int main(){

    int  n;
    cin>>n;
    cout<<nFibo(n)<<endl;
    return 0;
}