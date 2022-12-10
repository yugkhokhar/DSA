class Solution {
public:

void GenerateCombination(int start,int end,int k,vector<int>&temp,vector<vector<int>>&ans){

if(temp.size()==k){
    ans.push_back(temp);
    return; 
}

for(int i=start;i<=end;i++){
    temp.push_back(i);
GenerateCombination(i+1,end,k,temp,ans);
temp.pop_back();
}


}


    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>>ans;
        vector<int>temp;

GenerateCombination(1,n,k,temp,ans);
return ans;
    }
};