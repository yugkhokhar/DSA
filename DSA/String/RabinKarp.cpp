#include<bits/stdc++.h>

using namespace std;

int base=31,mod=1e9+2,N=1e3+2;


int main(){
string s,t;cin>>s>>t;
int ssize=s.size(),tsize=t.size();

vector<long long>power(N);
vector<long long>h_s(ssize+1,0);
vector<long long>h(ttsize+1,0);

long long h_s=0;
long long h_t=0;
power[0]=1;
for (int i = 1; i < N; i++)
{
    power[i]=(power[i-1]*base)%mod;
}

for (int i = 0; i < ttsize; i++)
{
  h[i+1]=(h[i]+(t[i]-'a'+1)*power[i])%mod;
}
for(int i=0;i<ssize;i++){
    h_s=(h_s+(s[i]-'a'+1)*power[i])%mod;
}
for (int i = 0; i+ssize-1 < ttsize; i++)
{
    long long curr_h=(h[i+ssize]-h[i]+mod)%mod;
    if(curr_h==(h_s*power[i])%mod) cout<< i <<endl;
}







    return 0;
}