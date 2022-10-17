#include<bits/stdc++.h>

using namespace std;


string moveXtolast(string s){
   
if(s.length()==0) return "";

char first=s[0];
string ans=moveXtolast(s.substr(1));
if(first=='x') return ans+first;
return first+ans;

}

int main(){

    cout<<moveXtolast("axfxxxgt")<<endl;
    return 0;
}