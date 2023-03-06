class Solution {


private:
  void dfs(int row,int col,vector<vector<int>>& grid,vector<vector<bool>>&visited,vector<vector<int>>& vec,int baseRow,int baseCol){
    visited[row][col]=true;

vec.push_back({row-baseRow,col-baseCol});

int n=grid.size();
int m=grid[0].size();



int delRow[]={-1,0,1,0};
int delCol[]={0,1,0,-1};

for(int i=0;i<4;i++)
{
int nextRow=row+delRow[i];
int nextCol=col+delCol[i];

if(nextRow>=0  && nextRow<n && nextCol>=0 && nextCol<m && !visited[nextRow][nextCol] && grid[nextRow][nextCol]==1){
        dfs(nextRow,nextCol,grid,visited,vec,baseRow,baseCol);
}






}




  }




public:

//SPACE COMPLEXITY: O(n*m) + O(n*m) = o(n*m)
// time complexity: o(n*m*log(set length)) + o(n*m*4) + =o(n*m)


    int DistinctIslands(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        set<vector<pair<int,int>>>s;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vector<pair<int,int>>vec;
                if(!visited[i][j] && grid[i][j]==1){
                    dfs(i,j,grid,visited,vec,i,j);
                    s.insert(vec);
                }
            }
        }

    return s.count();








    }
};