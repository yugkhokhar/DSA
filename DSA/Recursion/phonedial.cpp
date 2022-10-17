#include<bits/stdc++.h>

using namespace std;


void phonedial(string s,string ans){


string keypad[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

if(s.length()==0){
cout<<ans<<endl;
return;
}

char element=s[0];
string code=keypad[element-'0'];
string ros=s.substr(1);
for (int i = 0; i < code.length(); i++)
{
 phonedial(ros,ans+code[i]);   
}
}



int main(){

phonedial("234","");
    return 0;
}