class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int N = text1.length();
        int M = text2.length();
        int curr[M+1];
		// Value to store previous (i+1,j+1) value
        int prev_j1 = 0;
        memset(curr,0,sizeof(curr));
        for(int i =N-1;i>=0;i--){
            prev_j1 = 0;
            for( int j=M-1;j>=0;j--){
                int temp = curr[j];
                if(text1[i]==text2[j])
                    curr[j] = 1 + prev_j1;
                else
                    curr[j] = max(curr[j], curr[j+1]);
                prev_j1 = temp;
            }
        }
        return curr[0]; 
    }
};