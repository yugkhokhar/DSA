#include<bits/stdc++.h>

using namespace std;



bool isvalidparenthesis(string s){
stack<char>st;
bool ans=true;
for (int i = 0; i < s.length(); i++)
{
 if(s[i]=='(' || s[i]=='{' || s[i]=='['){
    st.push(s[i]);
 }   
 else if(s[i]==')'){
    if(!st.empty() && st.top()=='(')
    {
         st.pop();
    }
    else{
    return false;
    } 

 }
 else if(s[i]==']'){
    if(!st.empty() && st.top()=='[')
    {
         st.pop();
    }
    else{
    return false;
    } 

 }
 else if(s[i]=='}'){
    if(!st.empty() && st.top()=='{')
    {
         st.pop();
    }
    else{
    return false;
    } 

 }

}

if(!st.empty()){
    return false;
}
return true;

}



int main(){
if(isvalidparenthesis("[{}]")) cout<<"Valid String";
else cout<<"Not valid";
    return 0;
}