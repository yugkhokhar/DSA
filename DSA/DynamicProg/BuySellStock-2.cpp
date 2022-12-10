class Solution {
public:
O(N)

int Solve(int idx,int buy,vector<int>&prices, vector<vector<int>>&dp){

if(idx==prices.size())
 return 0;
if(dp[idx][buy]!=-1) return dp[idx][buy];

int profit=0;
 if(buy){
int buyStock=-prices[idx]+Solve(idx+1,0,prices,dp);
int SkipBuyStock=0+Solve(idx+1,1,prices,dp);
profit=max(buyStock,SkipBuyStock);
 }
 else{
int SellStock=prices[idx]+Solve(idx+1,1,prices,dp);
int SkipSellStock=0+Solve(idx+1,0,prices,dp);
profit=max(SellStock,SkipSellStock);
 }
return dp[idx][buy]=profit;
}


int SolveTab(vector<int>&prices){
    int n=prices.size();
      vector<vector<int>>dp(n+1,vector<int>(2,0));

for(int idx=n-1;idx>=0;idx--){
    for(int buy=0;buy<=1;buy++){
        
int profit=0;
 if(buy){
int buyStock=-prices[idx]+dp[idx+1][0];
int SkipBuyStock=0+dp[idx+1][1];
profit=max(buyStock,SkipBuyStock);
 }
 else{
int SellStock=prices[idx]+dp[idx+1][1];
int SkipSellStock=0+dp[idx+1][0];
profit=max(SellStock,SkipSellStock);
 }
    
    dp[idx][buy]=profit;    
}
}
return dp[0][1];
}





    int maxProfit(vector<int>& prices) {
int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return SolveTab(prices);
    }
};