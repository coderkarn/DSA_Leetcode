class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int s=0,n=nums.size();
        for(int i=0;i<n;i++)
            s+=nums[i];
        int s1=(target+s)/2;
        if((s<target) || (target+s)%2!=0)
            return 0;
        if(s1<0)
            return 0;
        int dp[n+1][s1+1];
        dp[0][0]=1;
        for(int i=1;i<=s1;i++)
            dp[0][i]=0;
        for(int i=0;i<=n;i++)
            dp[i][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=s1;j++)
            {
                if(nums[i-1]<=j)
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][s1];
    }
};