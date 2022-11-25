#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int N=1e3+2,MOD=1e9+2;
vector<long long>power(N);
vector<ll>hashes(N);
int base=31;


int calculate(string s){

int hash=0;
for (int i = 0; i < s.size(); i++)
{
    hash=(hash+(s[i]-'a'+1)*power[i])%MOD;
}
return hash;
}


int main(){

power[0]=1;

for (int i =1; i < N; i++)
{
    power[i]=power[i-1]*base;
}

vector<string>answer={"aa","ab","aa","ac","bb"};

for (int i = 0; i < answer.size(); i++)
{
    hashes.push_back(calculate(answer[i]));
}

sort(hashes.begin(),hashes.end());
int distant=0;
for (int i = 0; i < hashes.size(); i++)
{
    if(i==0 || hashes[i]!=hashes[i-1]) distant++;
}
    cout<<distant;

    return 0;
}

