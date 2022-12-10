class Solution {
public:

int Solve(vector<int>&nums1,vector<int>&nums2,int idx,int swapped,vector<vector<int>>&dp){
int ans=INT_MAX;
if(idx==nums1.size())
 return 0;

if(dp[idx][swapped]!=-1) return dp[idx][swapped];

int prev1=nums1[idx-1];
int prev2=nums2[idx-1];

if(swapped) swap(prev1,prev2);

//Noswap
if(nums1[idx]>prev1 && nums2[idx]>prev2){
    ans=Solve(nums1,nums2,idx+1,0,dp);
}

//Swap
if(nums1[idx]>prev2 && nums2[idx]>prev1){
    ans=min(ans,1+Solve(nums1,nums2,idx+1,1,dp));
}

return dp[idx][swapped]=ans;

}


int SolveTab(vector<int>& nums1, vector<int>& nums2){

    int n=nums1.size();
     vector<vector<int>>dp(nums1.size()+1,vector<int>(2,0));

for(int idx=n-1;idx>=1;idx--){
for(int swapped=1;swapped>=0;swapped--){
        int ans=INT_MAX;
    int prev1=nums1[idx-1];
    int prev2=nums2[idx-1];

    if(swapped) swap(prev1,prev2);
    //Noswap
    if(nums1[idx]>prev1 && nums2[idx]>prev2){
        ans=dp[idx+1][0];
    }
    //Swap
    if(nums1[idx]>prev2 && nums2[idx]>prev1){
        ans=min(ans,1+dp[idx+1][1]);
    }
    dp[idx][swapped]=ans;
}

}


return dp[1][0];
}


    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        int swapped=0;
        vector<vector<int>>dp(nums1.size(),vector<int>(2,-1));
        nums1.insert(nums1.begin(),-1);
        nums2.insert(nums2.begin(),-1);

        return Solve(nums1,nums2,1,swapped,dp);
    }
};