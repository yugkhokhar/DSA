#include<bits/stdc++.h>

using namespace std;

vector<int>prefix(string s){

int n=s.size();
vector<int>noofmatch(n,0);

//TC O(N)
for (int i =1; i < n; i++)
{
    int j=noofmatch[i-1];
    while(j>0 && s[i]!=s[j]){
        j--;
    }
    if(s[i]==s[j]){
        j++;
    }
noofmatch[i]=j;
}
return noofmatch;


}


int main(){

string s;
cin>>s;

vector<int>ans=prefix(s);
for (size_t i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}

string t="apnacollege";

int i(0),j(0);


while(i<t.size())
{


if(t[i]==s[j]) {
    i++;j++;
}
else{
    if(j!=0){
        j=ans[j-1];
    }
    else{
        i++;
    }
}
if(j==s.size()){
    pos=i-s.size();
    break;
}
}

cout<<pos;




    return 0;
}