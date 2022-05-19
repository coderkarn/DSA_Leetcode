class Solution {
public:
    int ans = INT_MIN;
	// For four directional movement in matrix
    int d1[4] = {0, 0, 1, -1};
    int d2[4] = {-1, 1, 0, 0};
	
	//DFS call
    int calc(vector<vector<int>> &mat, int r, int c, vector<vector<int>> &dp){
        if(dp[r][c] != -1){
            return dp[r][c];
        }
		int maxPathForCurr = 0;
        for(int i = 0; i<4; i++){
            int r1 = r + d1[i];
            int c1 = c + d2[i];
			// Check the bounds of r1 and c1
            if(r1>=0 && c1>=0 && r1<mat.size() && c1<mat[0].size()){
			
				// Make DFS only when neighbour value is greater than current element's value
                if(mat[r1][c1] > mat[r][c]){
					// Maintain a max from all the neighbours for current element
                    int neighPath = calc(mat, r1, c1, dp) + 1;
					// calculate max Increasing path length from each neighbour
                    maxPathForCurr = max(maxPathForCurr, neighPath);
                }
            }
        }
		// Update the dp with max Ans found
		dp[r][c] = maxPathForCurr;
		// Update the global max answer if this is greater than previous found length
        ans = max(dp[r][c], ans);
        return dp[r][c];
    }
    
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), -1));
        for(int i=0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[i].size(); j++){
                if(dp[i][j] == -1){
                    calc(matrix, i, j, dp);
				}
            }
        }
        return ans+1;
    }
};