class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        int t[m+1][n+1];
        memset(t,0,sizeof(t));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(text1[i-1]==text2[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[m][n];
            // int curr[M+1];
            // // Value to store previous (i+1,j+1) value
            // int prev_j1 = 0;
            // memset(curr,0,sizeof(curr));
            // for(int i =N-1;i>=0;i--){
            //     prev_j1 = 0;
            //     for( int j=M-1;j>=0;j--){
            //         int temp = curr[j];
            //         if(text1[i]==text2[j])
            //             curr[j] = 1 + prev_j1;
            //         else
            //             curr[j] = max(curr[j], curr[j+1]);
            //         prev_j1 = temp;
            //     }
            // }
            // return curr[0]; 
    }
};