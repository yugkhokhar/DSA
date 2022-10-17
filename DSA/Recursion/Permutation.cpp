#include<bits/stdc++.h>

using namespace std;


void permutation(string s,string ans){

    if(s.length()==0){
       cout<<ans<<endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char fixedCharacter=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+fixedCharacter);
    }
}

int main(){
    permutation("ABC","");
    return 0;
}