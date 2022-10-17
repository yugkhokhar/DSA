#include<bits/stdc++.h>

using namespace std;


void reversString(string s){
    
if(s.length()==0) return;

reverse(s.substr(1));
cout<<s[0]<<endl;


}

int main(){
    int n;cin>>n;
    cout<<nFactorial(n)<<endl;
    return 0;
}