class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=mat[i][i];
            ans+=mat[i][n-i-1];
        }
        if((n%2)==0)
            //case of even matrix as n is always 1 greater than index value
            return ans;
        else
            return ans - mat[n/2][n/2];
    }
};