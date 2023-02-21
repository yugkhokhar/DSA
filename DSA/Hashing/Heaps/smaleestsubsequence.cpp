#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for(int i=a;i<b;i++)
#define v1 vector<int>
#define pii pair<int,int>


int main()
{
int n,k;
cin>>n>>k;
v1 a(n);

loop(i,0,n)
  {
      cin>>a[i];
  }

priority_queue<int,v1>pq;
loop(i,0,n)
{
pq.push(a[i]);
}

int sum=0;
int count=0;

while (!pq.empty())
{
    int top=pq.top();
    pq.pop();
    sum+=top;
    count++;
    if(sum>=k)
    {
        break;
    }
}

if(sum<k)
{
    cout<<"NO SUBSEQUENCE EXIST";
}
else{
    cout<<count;
}




    return 0;
}