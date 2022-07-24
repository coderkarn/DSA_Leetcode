class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            int j=0;
            int k=n-1;
            while(j<=k){
                int m=j+(k-j)/2;
                if(matrix[i][m]==target)
                    return true;
                else if(matrix[i][m]>target)
                    k=m-1;
                else
                    j=m+1;
                }
            }
        return false;
    }
};