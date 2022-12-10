 int longestArithSeqLength(vector<int>& A) {
        int res = 0, n = A.size();
        unordered_map<int, unordered_map<int, int>> dp;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                int diff = A[i] - A[j];
                dp[i][diff] = dp[j][diff] + 1;
                res = max(res, dp[i][diff]);
            }
        }
        return res + 1;
    }


     int longestArithSeqLength(vector<int>& nums) {
        int n=nums.size();
        if(n<=2){
            return n;
        }

        unordered_map<int,int>dp[n+1];
        int ans=0;
            for(int i=1;i<n;i++){
                for(int j=0;j<i;j++){
                    int diff=nums[i]-nums[j];
                    int  count=1;

                    if(dp[j].count(diff)){
                        count=dp[j][diff];
                    }
                    dp[i][diff]=count+1;
                    ans=max(ans,dp[i][diff]);

                }
                return ans;
            }}