#include<bits/stdc++.h>

using namespace std;


int nFactorial(int n){
    if(n==0) return 1;
    return n*nFactorial(n-1);
}

int main(){
    int n;cin>>n;
    cout<<nFactorial(n)<<endl;
    return 0;
}