class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        vector<int>tempinterval=intervals[0];
for(auto it:intervals){
    if(tempinterval[1]>=it[0]){
        tempinterval[1]=max(tempinterval[1],it[1]);
    }
    else{
        ans.push_back(tempinterval);
        tempinterval=it;
    }
}
ans.push_back(tempinterval);





        return ans;
    }
};