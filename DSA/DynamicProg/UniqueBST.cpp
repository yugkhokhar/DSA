class Solution {
    //Print the N catalan numbers
public:

int SolveMem(int n,vector<int>&dp){
    if(n<=1) return 1;
if(dp[n]!=-1) return dp[n];
int ans=0;

// i->root node
for(int i=1;i<=n;i++){
ans+=SolveMem(i-1,dp)*SolveMem(n-i,dp);
}
return dp[n]=ans;

}

//TC O(N2) SC O(N)

int SolveTab(int n){
    vector<int>dp(n+1,0);
    dp[0]=dp[1]=1;
    //i reprents number of nodes
    for(int i=2;i<=n;i++){
        int ans=0;

        //j->root node
  for(int j=1;j<=i;j++){
ans+=dp[j-1]*dp[i-j];
  }
    }
    return dp[n];
}


int numTrees(int n) {
        
vector<int>dp(n+1,-1);
return SolveMem(n,dp);


    }
};