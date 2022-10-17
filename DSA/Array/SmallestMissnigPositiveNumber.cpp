#include<bits/stdc++.h>

using namespace std;

int main()
{

int N=1e6+2;
int n;
cin>>n;
int b[n];
bool a[N];

for (int i = 0; i < n; i++)
{
    cin>>b[i];    
}

for (int i = 0; i < N; i++)
{
    a[i]=false;
}

for (int i = 0; i < n; i++)
{
    if(b[i]>=0)
    {
    a[b[i]]=true;    
    }
}

for (int i = 0; i < N; i++)
{
    if(a[i]==false) 
     {
          cout<<i<<endl;
          break;
        }
    
}

    return 0;
}