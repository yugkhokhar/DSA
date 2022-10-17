//calculate the value per unit weight
//sort the values in decreaseing order 
//take the value if item from start until the weight is less than W
//and if a element comes whos weight is more then W take a particular
//  weight part of that item that makes the W complete 








#include<bits/stdc++.h>

using namespace std;



bool compare(pair<int,int>p1,pair<int,int>p2)
{
      double vw1=(double)p1.first/p1.second;
         double vw2=(double)p2.first/p2.second;
         return vw1>vw2;
}





int main()
{
int n;
cin>>n;

vector<pair<int,int>>v(n);


for(int i=0;i<n;i++)
{
    int value,weight;
    cin>>v[i].first>>v[i].second;

}

sort(v.begin(),v.end(),compare);
int maxval=0,W;
cin>>W;
for(int i=0;i<n;i++)
{
if(W>=v[i].second)
{
    maxval+=v[i].first;
    W-=v[i].second;
    continue;
}

double vw=(double)v[i].first/v[i].second;
maxval+=vw*W;
W=0;
break;



}


    return 0;
}