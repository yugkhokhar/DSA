class Solution {
public:
int SolveTab(string text1,string text2){

  int asz = text1.size(), bsz =text2.size();
        int dp[asz + 1][bsz + 1]; 
        int i, j;
   

        for (i = 0; i <= asz; i++) { 
            for (j = 0; j <= bsz; j++) { 
                if (i == 0 || j == 0) {
                    dp[i][j] = 0;                               /* initialize */
                } else if (text1[i - 1] == text2[j - 1]) {              /* match */
                    dp[i][j] = dp[i-1][j-1] + 1;                /* score */
                } else {                                        /* didn't match */
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);     /* inherit max of top or left */
                }
            }
        }
        
        return dp[asz][bsz];
}
    int longestPalindromeSubseq(string s) {
        string reverseString=s;
        reverse(reverseString.begin(),reverseString.end());
        int ans=SolveTab(s,reverseString);
        return ans;
    }
};