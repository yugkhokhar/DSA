//make a prefixsum array which contain the sum till that element
//make a map of key with sum value till a element and value as its frequency
//if the key value in map is 0 then include it in answer

//the main idea is to find the to find the same 2 value of x and it is
// possible that the value between the two x is zero and the two same x 
// can be found using mc2 where m is the frequency of x






#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
vector<int>a(n);

for(int i=0;i<n;i++)
{
    cin>>a[i];
}

int prefixsum=0;
map<int,int>m;
for(int i=0;i<n;i++)
{
prefixsum+=a[i];
m[prefixsum]++;
}

map<int,int>::iterator it;
int ans=0;
for(it=m.begin();it!=m.end();it++)
{
  int c=it->second;
ans+=(c*(c-1))/2;

if(it->first==0)
{
    ans+=it->second;
}
}







    return 0;
}