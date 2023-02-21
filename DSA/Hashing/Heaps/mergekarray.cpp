#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin>>k;

vector<vector<int>>v1(k);
for(int i=0;i<k;i++)
{
    int size;
    cin>>size;
v1[i]=vector<int>(size);

for(int j=0;j<size;j++)
{
    cin>>v1[i][j];
}

vector<int>idx(k,0);  //index store to keep track

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

for(int i=0;i<k;i++)
{
    pq.push({v1[i][0],i});   // i represent the array number
}

vector<int>ans;

while(!pq.empty())
{
  pair<int,int>x= pq.top();
pq.pop();

ans.push_back(x.first);

if(idx[x.second]+1< v1[x.second].size()) //checks the size of array in index
{
  pq.push({v1[x.second][idx[x.second]+1],x.second});
idx[x.second]+=1;

}

}
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<endl;
}

}





return 0;
}