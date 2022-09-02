class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0,j=n-1;
        while(i<m && j>=0){
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]>target)
                j--;
            else 
                i++;
        }
        return 0;
        // int m=matrix.size();
        // int n=matrix[0].size();
        // for(int i=0;i<m;i++){
        //     int s=matrix[i][0];
        //     int e=matrix[i][n-1];
        //     if(e<target){
        //         continue;
        //     }
        //     else{
        //         int j=0;
        //         int k=n-1;
        //         while(j<=k){
        //             int m=j+(k-j)/2;
        //             if(matrix[i][m]==target)
        //                 return true;
        //             else if(matrix[i][m]>target)
        //                 k=m-1;
        //             else
        //                 j=m+1;
        //         }
        //     }
        // }
        // return false;
    }
};