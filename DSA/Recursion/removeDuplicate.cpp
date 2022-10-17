#include<bits/stdc++.h>

using namespace std;


string removeDuplicate(string s){
   
if(s.length()==0) return "";

char first=s[0];
string ans=removeDuplicate(s.substr(1));
if(first==ans[0]) return ans;
return first+ans;
}

int main(){

    cout<<removeDuplicate("aabbccddee")<<endl;
    return 0;
}