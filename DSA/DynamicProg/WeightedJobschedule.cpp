//SORT THE ELEMNET ACCORDING TO THE FINISH TIME
//CHECK THAT THE FINSIH TIME OF PREVIOUS NOT OVERLAP WITH THE NEXT JOB START TIME

#include<bits/stdc++.h>
using namespace std;


struct JOB{

int start,end,profit;
}

bool comp(JOB a,JOB b)
{
    return a.end<b.end;
}

int findMaxProfit(JOB arr[],int n)
{
sort(arr,arr+n,comp);
int dp=new int[n];
dp[0]=arr[0].profit;

for (int i = 1; i < n; i++)
{
    int include=arr[i].profit;
    int lstNconflict=-1;
//if want to include then calculate the last nonconflict set of values and if ound then add the 
//value of that index in include and then cmp the max of include and not include
//if not want to include that set of values then add the profit of previous set of values


    for(int j=i-1;j>=0;j--)
    {
        if(arr[j].end<=arr[i].start)
        {
            lstNconflict=j; //index
        }
    }
if(lstNconflict!=-1)
{
    include+=dp[lstNconflict];
}
dp[i]=max(include,dp[i-1]);

}
int ans=dp[n-1];
delete dp;
return ans;




}


int main()
{

JOB arr[]={{1,2,50},{3,5,30},{8,9,40}};
cout<<findMaxProfit(arr,3);
    return 0;
}
