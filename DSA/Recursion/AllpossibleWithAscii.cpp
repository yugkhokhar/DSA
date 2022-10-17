#include<bits/stdc++.h>

using namespace std;


void subseq(string s,string ans){
   
if(s.length()==0){
cout<<ans<<endl;
return;
}

char element=s[0];
int code=element;
string ros=s.substr(1);
subseq(ros,ans);
subseq(ros,ans+element);
subseq(ros,ans+to_string(code));
}

int main(){

subseq("abcde","");
    return 0;
}