#include<bits/stdc++.h>

using namespace std;



bool redudant(string s)
{
bool ans=false;
stack<char>st;
for(int i=0;i<s.length();i++)
{

if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/') st.push(s[i]);
else if (s[i]=='(') st.push(s[i]);
else if(s[i]==')'){
    if(st.top()=='(')
    {
    return true;
    }
    while(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/') st.pop(); 
    st.pop();
}

}

return false;
}




int main(){
 if(redudant("((a+b)(c+d))")){
    cout<<"Redudant Found";
 }  
 else cout<<"Not Redudantant";
      return 0;
}