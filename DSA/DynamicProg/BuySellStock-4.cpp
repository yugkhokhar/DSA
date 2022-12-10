class Solution {
public:


int SolveTab(vector<int>&prices,int k){

vector<int>curr(2*k+1,0);
vector<int>next(2*k+1,0);

int n=prices.size();

for(int idx=n-1;idx>=0;idx--){

for(int operationno=0;operationno<2*k;operationno++){


int profit=0;
if(operationno%2==0)
{
int buyStock=-prices[idx]+next[operationno+1];
int SkipBuyStock=0+next1[operationno];
profit=max(buyStock,SkipBuyStock);
}

else{
   int SellStock=prices[idx]+next[operationno+1];
int SkipSellStock=0+next[operationno];
profit=max(SellStock,SkipSellStock); 
}

curr[operationno]=profit;
}

next=curr;
}

return next[0];
}





int SolveMemo(int idx,int buy,vector<int>&prices, vector<vector<vector<int>>>&dp,int limit){

if(idx==prices.size())
 return 0;

if(limit==0) return 0;

if(dp[idx][buy][limit]!=-1) return dp[idx][buy][limit];

int profit=0;
 if(buy){
int buyStock=-prices[idx]+SolveMemo(idx+1,0,prices,dp,limit);
int SkipBuyStock=0+SolveMemo(idx+1,1,prices,dp,limit);
profit=max(buyStock,SkipBuyStock);
 }
 else{
int SellStock=prices[idx]+SolveMemo(idx+1,1,prices,dp,limit-1);
int SkipSellStock=0+SolveMemo(idx+1,0,prices,dp,limit);
profit=max(SellStock,SkipSellStock);
 }
return dp[idx][buy][limit]=profit;
}

    int maxProfit(int k,vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(k+1,-1)));
        return SolveMemo(0,1,prices,dp,k);
    }
};