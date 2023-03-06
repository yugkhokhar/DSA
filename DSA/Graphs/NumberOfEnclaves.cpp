/* 
You are given an m x n binary matrix grid, where 0 represents a sea cell and 1 represents a land cell.

A move consists of walking from one land cell to another adjacent (4-directionally) land cell or walking off the boundary of the grid.

Return the number of land cells in grid for which we cannot walk off the boundary of the grid in any number of moves.



Input: grid = [[0,0,0,0],[1,0,1,0],[0,1,1,0],[0,0,0,0]]
Output: 3
Explanation: There are three 1s that are enclosed by 0s, and one 1 that is not enclosed because its on the boundary.

Input: grid = [[0,1,1,0],[0,0,1,0],[0,0,1,0],[0,0,0,0]]
Output: 0
Explanation: All 1s are either on the boundary or can reach the boundary.


 */

 //bfs
 class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
       int n=grid.size();
       int m=grid[0].size();
      
      vector<vector<int>>visited(n,vector<int>(m,0));

       queue<pair<int,int>>q;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(i==0 || j==0 || i==n-1|| j==m-1){
                   if(grid[i][j]==1){
                       q.push({i,j});
                       visited[i][j]=1;
                   }
               }
           }
       }
        
while(!q.empty()){

    int row=q.front().first;
    int col=q.front().second;
    q.pop();


    int rowIdx[]={-1,0,1,0};
    int colIdx[]={0,1,0,-1};

        for(int i=0;i<4;i++){

            int nextRow=row+rowIdx[i];
            int nextCol=col+colIdx[i];


            if(nextRow>=0 && nextRow<n && nextCol>=0 && nextCol<m && !visited[nextRow][nextCol] && grid[nextRow][nextCol]==1){
                q.push({nextRow,nextCol});
                visited[nextRow][nextCol];
            }

        }   

}

int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(!visited[i][j] && grid[i][j]==1){
            count++;
        }
    }
}

return count;








}


};






//dfs

class Solution {
public:

    void dfs(int i, int j, int n, int m, vector<vector<int>>& grid){
        grid[i][j]= 0;
        // cout<<i<<" "<<j<<endl;

        // for all four directions
        int dr[4]= {-1, 0, 1, 0};
        int dc[4]= {0, -1, 0, 1};

        for(int k=0; k<4; k++){
            int nr= i+ dr[k];
            int nc= j+ dc[k];

            if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc]==1){
                dfs(nr, nc, n, m, grid);
            }
        }
    }


    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                // if its a boundary cell
                if(i*j==0 || i==n-1 || j==m-1){
                    if(grid[i][j]==1){
                    dfs(i, j, n, m, grid);}
                }
            }
        }
        int ans=0;
         for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    ans++;
                }
            }
         }
         return ans;
    }
};