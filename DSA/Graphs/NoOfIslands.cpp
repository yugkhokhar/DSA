class Solution {
public:
    void DFS(vector<vector<char>>& grid, int i, int j) {
        // boundary checking
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return;
        // return if current position is of water or is already visited
        if(grid[i][j] == '2' || grid[i][j] == '0')
            return;
        
        // mark the current as visited
        grid[i][j] = '2';
        
        // do DFS in all 4 directions
        DFS(grid, i+1, j);
        DFS(grid, i, j-1);
        DFS(grid, i-1, j);
        DFS(grid, i, j+1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // We can treat the matrix grid as a grid. Each Island is a
        // connected component. The task is to find no. of disconnectedd components
        // in the graph.
        
        int islands = 0;
        // We make each 1 as 2 in when it is visited
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                // do DFS in case has not been visited and there is land
                if(grid[i][j] == '1') {
                    DFS(grid, i, j);
                    ++islands;
                } 
            }
        }
        return islands;
    }
};


//BFS 

class Solution {

private:

void bfs(pair<int,int>p,vector<vector<int>>&visited,vector<vector<char>>&grid){
visited[p.first][p.second]=1;
queue<pair<int,int>>q;
q.push(p);

while(!q.empty()){
int row=q.front().first;
int col=q.front().second;
q.pop();
for(int delrow=-1;delrow<=1;delrow++){
    for(int delcol=-1;delcol<=1;delcol++){
        int nextrow=row+delrow;
        int nextcol=col+delcol;


if(nextrow>=0 && nextrow<grid.size() && nextcol>=0 && nextcol<grid[0].size() && grid[nextrow][nextcol]=='1' && !visited[nextrow][nextcol]){
    visited[nextrow][nextcol]=1;
    q.push({nextrow,nextcol});
}

    }
}

}

}

public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
 int count=0;
 for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
          if(grid[i][j]=='1' && !visited[i][j]){
             bfs({i,j},visited,grid); 
             count++;
          }




     }
 }

return count;


    }
};