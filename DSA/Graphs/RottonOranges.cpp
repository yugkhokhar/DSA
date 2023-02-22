class Solution {
public:

//SPACE COMPLEXITY: O(n*m) + O(n*m) = o(n*m)
// time complexity: o(n*m) + o(n*m*4)=o(n*m)


    int orangesRotting(vector<vector<int>>& grid) {
        
queue<pair<pair<int,int>,int>>q;
int n=grid.size();
int m=grid[0].size();
int visited[n][m];
int timeCount=0;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(grid[i][j]==2){
          q.push({{i,j},0});
      }
      else{
          visited[i][j]=0;
      }
    }
}

   int delRow[]={-1,0,1,0};
   int delCol[]={0,1,0,-1};

while(!q.empty()){

int currRow=q.front().first.first;
int currCol=q.front().first.second;
int time=q.front().second;
timeCount=max(timeCount,time);
q.pop();

for(int i=0;i<4;i++){
    int nextRow=currRow+delRow[i];
    int nextCol=currCol+delCol[i];


if(nextRow>=0 && nextRow<n && nextCol>=0 && nextCol<m && visited[nextRow][nextCol]!=2 && grid[nextRow][nextCol]==1){
   q.push({{nextRow,nextCol},time+1});
    visited[nextRow][nextCol]=2;
}
}
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(visited[i][j]!=2 && grid[i][j]==1) return -1;
    }
}
 return timeCount;














    }
};