
int MaximumSum(vi &nums){

int n=nums.size();

vi dp(n,0);

dp[0]=nums[0];

rep(i,0,n){
int includes=dp[i-2]+nums[i];
int excludes=dp[i-1]+0;
dp[i]=max(include,excludes);
}

return dp[n-1];

}