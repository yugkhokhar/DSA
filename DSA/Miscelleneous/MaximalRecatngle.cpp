class Solution{
public:
int maximalRectangle(vector<vector<char>>& matrix) {
        if(!matrix.size()) return 0;
        
        vector<int> height(matrix[0].size()+1); // extra element because I am considering the area till previous element
        int ans=0;
        
        for(int i=0;i<matrix.size();i++) {
            // Construct height array
            for(int j=0;j<matrix[i].size();j++) {
                if(matrix[i][j]=='1') height[j]=height[j]+1;
                else height[j]=0;
            }
            
            // Find the largest histogram at this row
            stack<int> index;
            height[matrix[i].size()]=0;
            for(int j=0;j<height.size();j++) {
                while(index.size()>0 && height[index.top()]>=height[j]) {
                    int h = height[index.top()];
                    index.pop();

                    int left_boundary = index.size()>0?index.top():-1;
                    ans = max(ans, h*(j-left_boundary-1));
                }
                index.push(j);
            }
        }
        return ans;
    }
};