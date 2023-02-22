class Solution {

// X=N*M

// TIME COMPLEXITY : O(X)+ FOUR DIRECTIONS FOR EACH NODE O(4*X) +  RECURSIVE STACK O(X)= O(X)
//SPACE COMPLEXITY: O(X) 

private:
void dfs(int row,int col,int newColor,int intialColor,vector<vector<int>>& image,vector<vector<int>>& ans,int delRow[],int delCol[]){

ans[row][col]=newColor;
for(int i=0;i<4;i++){

int nextRow=row+delRow[i];
int nextCol=col+delCol[i];

if(nextRow>=0 && nextRow<image.size() && nextCol>=0 && nextCol<image[0].size() && image[nextRow][nextCol]==intialColor && ans[nextRow][nextCol]!=newColor)
{
dfs(nextRow,nextCol,newColor,intialColor,image,ans,delRow,delCol);
}

}

}


public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
   int intialColor=image[sr][sc];
   int delRow[]={-1,0,1,0};
   int delCol[]={0,1,0,-1};
   vector<vector<int>>ans=image;

    dfs(sr,sc,color,intialColor,image,ans,delRow,delCol);
    return ans;

}
};