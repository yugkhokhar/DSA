#include<bits/stdc++.h>

using namespace std;


#define v1 vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)


int main()
{

int n,k;
cin>>n>>k;
v1 a(n);

for(int i=0;i<n;i++)
{
    cin>>a[i];
}

map<int,int>freq;

for(int i=0;i<n;i++)
{
    int presesntsize=freq.size();
    if(freq[a[i]]==0 && presesntsize==k)
        break;

freq[a[i]]++;
}

vector<pair<int,int>>p1;
map<int,int>::iterator it1;

for(it1=freq.begin();it1!=freq.end();it1++)
{
    if((it1->second)!=0)
       p1.push_back({it1->second,it1->first});
}

sort(p1.begin(),p1.end(),greater<pair<int,int>>);

vector<pair<int,int>>::iterator it2;


for(it2=p1.begin();it2!=p1.end();it2++)
{
    cout<<it2->second<<" "<<it2->first<<"\n";
}

    return 0;
}