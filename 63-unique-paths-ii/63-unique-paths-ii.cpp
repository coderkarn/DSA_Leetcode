class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        int dp[m][n];
        if(obstacleGrid[0][0]==0)
            dp[0][0]=1;
        if(obstacleGrid[0][0]==1)
            dp[0][0]=0;
        
        for(int i=1;i<m;i++){
            if(obstacleGrid[i][0]==1)
                dp[i][0]=0;
            else
                dp[i][0]=dp[i-1][0];
        }
        for(int j=1;j<n;j++){
            if(obstacleGrid[0][j]==1)
                dp[0][j]=0;
            else
                dp[0][j]=dp[0][j-1];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(obstacleGrid[i][j]==1)
                    dp[i][j]=0;
                else{
                    dp[i][j]=dp[i][j-1]+dp[i-1][j];
                }
            }
        }
        return dp[m-1][n-1];
    }
};