class Solution {
//Similar to the House Roobery Problem
public:
int PizzaWithMem(int start,int end,vector<int>slices,int sliceToEat,vector<vector<int>>&dp){
if(sliceToEat==0 || start>end) return 0;

if(dp[start][sliceToEat]!=-1) return dp[start][sliceToEat];
int Eat=slices[start]+PizzaWithMem(start+2,end,slices,sliceToEat-1,dp);
int NotEat=0+PizzaWithMem(start+1,end,slices,sliceToEat,dp);

return  dp[start][sliceToEat]=max(Eat,NotEat);

}





int maxSizeSlices(vector<int>& slices) {
int k=slices.size();
vector<vector<int>>dp1(k,vector<int>(k,-1));
vector<vector<int>>dp2(k,vector<int>(k,-1));


        int House1=PizzaWithMem(0,k-2,slices,k/3,dp1);
        int House1Not=PizzaWithMem(1,k-1,slices,k/3,dp2);


    return max(House1,House1Not);
    }
};