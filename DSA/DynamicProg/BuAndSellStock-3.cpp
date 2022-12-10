class Solution {
public:
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

    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));
        return SolveMemo(0,1,prices,dp,2);
    }
};