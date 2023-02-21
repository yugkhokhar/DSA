class Solution {


private:
void dfs(int node,vector<int>adjLi[],vector<int>&visited){
    visited[node]=1;
    for(auto it:adjLi[node]){
        if(!visited[it]){
            dfs(it,adjLi,visited);
        }
    }
}

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int>adjLi[isConnected.size()];
vector<int>visited(isConnected.size(),0);
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[0].size();j++){
                if(isConnected[i][j]==1 && i!=j){
                adjLi[i].push_back(j);
                adjLi[j].push_back(i);
                }
            }
        }


int count=0;
for(int i=0;i<visited.size();i++){
    if(visited[i]==0){
        count++;
        dfs(i,adjLi,visited);
    }
}

return count;



    }
};