class Solution {
public:
int ans=1;
int solve(vector<vector<int>>& grid,int ans,int i,int j){
int n=grid.size();
if(i==n-1 && j==n-1)
return ans;
if(i<n-1 && j<n-1 && grid[i+1][j+1]==0){
return solve(grid,ans+1,i+1,j+1);
}
else if(i<n-1 && grid[i+1][j]==0){
return solve(grid,ans+1,i+1,j);
}
else if(j<n-1 && grid[i][j+1]==0){
return solve(grid,ans+1,i,j+1);
}
return -1;
}
int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
int n=grid.size();
if(grid[0][0]==1)
return -1;
solve(grid,1,0,0);
return ans;
}
};