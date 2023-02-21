class Solution {
public:

int SolveMem(string&s1,string&s2,int i,int j, vector<vector<int>>&dp){

if(i==s1.length()){
    return s2.length()-j;
}

if(j==s2.length()){
    return s1.length()-i;
}

if(dp[i][j]!=-1) return dp[i][j];


int ans=0;
if(s1[i]==s2[j]){
    return SolveMem(s1,s2,i+1,j+1,dp);
}

else{

//Insert A Character when no match
int InsertAnswer=1+SolveMem(s1,s2,i,j+1,dp);

int DeleteAnswer=1+SolveMem(s1,s2,i+1,j,dp);

int ReplaceAnswer=1+SolveMem(s1,s2,i+1,j+1,dp);

ans=min({InsertAnswer,DeleteAnswer,ReplaceAnswer});
}
return dp[i][j]=ans;
}




int SolveTab(string&s1,string&s2){
vector<vector<int>>dp(s1.length()+1,vector<int>(s2.length()+1,0));

for(int j=0;j<s2.length();j++){
    dp[s1.length()][j]=s2.length()-j;
}

for(int i=0;i<s1.length();i++){
    dp[i][s2.length()]=s1.length()-i;
}


for(int i=s1.length()-1;i>=0;i--){
    for(int j=s2.length()-1;j>=0;j--){

        int ans=0;
        if(s1[i]==s2[j]){
            ans=dp[i+1][j+1];
        }

        else{

                //Insert A Character when no match
                int InsertAnswer=1+dp[i][j+1];

                int DeleteAnswer=1+dp[i+1][j];

                int ReplaceAnswer=1+dp[i+1][j+1];


                ans=min({InsertAnswer,DeleteAnswer,ReplaceAnswer});
            }

         dp[i][j]=ans;
    }
}

return dp[0][0];

}







    int minDistance(string word1, string word2) {
        return SolveTab(word1,word2);
    }
};