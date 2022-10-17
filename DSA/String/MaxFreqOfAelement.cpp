#include<bits/stdc++.h>

using namespace std;

int main(){
string s="asdsadsasda";

int freq[26]={0};

for (int i = 0; i < s.length(); i++)
{
    freq[s[i]-'a']++;
}
int maxfreq=0;
char answer='a';
for (int i = 0; i <26; i++)
{
    if(freq[i]>maxfreq) maxfreq=freq[i];
    answer=i+'a';
}

cout<<answer << " "<<maxfreq;

    return 0;
}
