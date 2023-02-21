class Solution {
public:

int Solve(int n){
vector<int>dp(n+1,INT_MAX);
dp[0]=0;

for(int i=1;i<=n;i++){
  
for(int j=1;j*j<=i;j++){
dp[i]=min(dp[i],1+dp[i-j*j]);   
}
}
return dp[n];
}


int numSquares(int n) {
        return Solve(n);
    }
};