class Solution {
public:

int Solve(int n,int k ,int target ,vector<vector<int>>&dp)
{
    int mod=1e+9;
if(target==0 && n!=0){
    return 0;
}
if(target!=0 && n==0){
    return 0;
}
if(target==0 && n==0) return 1;
if(dp[n][target]!=-1) return dp[n][target];
int ans=0;
for(int i=1;i<=k;i++){
ans=(ans%mod+Solve(n-1,k,target-i,dp)%mod)%mod;
}
return dp[n][target]=ans;
}


int SolveWithTab(int n,int k,int target){
int modu = pow(10, 9) + 7;

vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
dp[0][0]=1;

for(int i=1;i<=n;i++){
    for(int j=1;i<=target;j++)
    {
        int ans=0;
        for(int l=1;l<=k;l++){
             ans=((ans%modu)+(dp[n-1][target-l])%modu)%modu;
    }
    dp[i][j]=ans;
    }
}
return (dp[n][target])%modu;
}



int numRollsToTarget(int d, int f, int target) {
 
 vector<vector<int>> dp(d + 1, vector<int>(target + 1, 0));
        for (int i = 1; i <= f && i <= target; i++) {
            dp[1][i] = 1;
        }
        for (int i = 2; i <= d; i++) {
            for (int j = 1; j <= target; j++)
                for (int k = 1; k <= f && k < j; k++) {
                    dp[i][j] += dp[i - 1][j - k];
                    dp[i][j] %= modu;
                }
                    
        }
        return dp[d][target];

    }

int numRollsToTarget(int n, int k, int target) {

vector<vector<int>>dp(n+1,vector<int>(target+1,-1)); 
return Solve(n,k,target,dp);

    }
};