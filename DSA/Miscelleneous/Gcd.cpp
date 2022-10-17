#include<bits/stdc++.h>

using namespace std;


int gcd(int a,int b){

if(a==0) return b;
if(b==0) return a;
return gcd(b,a%b);
}


int main(){

int n;
cin>>a>>b;
cout<<gcd(a,b)<<endl;






    return 0;
}