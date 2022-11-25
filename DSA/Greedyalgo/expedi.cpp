//take input of no of stops
// *take a vecotr pair which stores the distance of stop from town 
//*and fuel supply possible 
//
//
//   








#include<bits/stdc++.h>

using namespace std;







int main()
{
    int t;cin>>t;
    while (t--)
    {
        
    
    //no of stops
int n;
cin>>n;

//details of stop
vector<pair<int,int>>v(n);


for(int i=0;i<n;i++)
{
    cin>>v[i].first>>v[i].second;

}

//l represent the distance of truck from town
//p rep the intial fuel in truck

int l,p;
cin>>l>>p;

//storing the distance of stop from the truck intial position l from town
//and the stop distance from town
for(int i=0;i<n;i++)
{
 v[i].first=l-v[i].first;
}
//sort the vector to find the min distance between truck and stop
sort(v.begin(),v.end());

//variable for storing the ans of no of stops and cft for current fuel in truck
int ans=0;
int cft=p;

priority_queue<int,vector<int>>pq;
bool flag=0;

    for(int i=0;i<n;i++)
    {
                if(cft>=l)
                {
                    break;
                }

                while(cft<v[i].first)
                {

                if(pq.empty())
                {
                    flag=1;
                    break;
                }
                ans++;
                cft+=pq.top();
                pq.pop();
                }

                if(flag)
                {
                    break;
                }
                pq.push(v[i].second);

    }


if(flag)
{
    cout<"-1"<<" ";
    continue;
}


while(!pq.empty() && cft<l)
{
    curr+=pq.top();
    pq.pop();
    ans++;
}

if(cft<l)
{
    cout<<"-1"<<endl;
    continue;
}
cout<<ans<<endl;




}


    return 0;
}