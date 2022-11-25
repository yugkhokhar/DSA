//sorting the inner vector with start and end of a 2d vector
//first take the first vector with end time and then comapare the end time 
//of the first activity with the start time of next activity if the start 
//of other is greater then the end of prev then we increase the take value 

#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;

vector<vector<int>>v;
for(int i=0;i<n;i++)
{
   int start,end;
   cin>>start>>end;
   v.push_back({start,end});
}

sort(v.begin(),v.end(),[&](vector<int>&a,vector<int>&b){return a[1]<b[1];});


int take=1;
int end=v[0][1];

for(int i=1;i<n;i++)
{
    if(v[i][0]>=end)
    {
        take++;
        end=v[i][1];
    }
}

    return 0;
}