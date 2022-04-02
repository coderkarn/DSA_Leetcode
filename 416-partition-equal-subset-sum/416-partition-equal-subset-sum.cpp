class Solution {
public:
    bool subsetSum(vector<int>& nums,int k){
        int n=nums.size();
        bool dp[n+1][k+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<k+1;j++){
                if(i==0)
                    dp[i][j]=false;
                if(j==0)
                    dp[i][j]=true;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<k+1;j++){
                if(nums[i-1]<=j)
                    dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][k];
    }
    
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
            s+=nums[i];
        if(s%2!=0)
            return false;
        else
            return subsetSum(nums,s/2);
    }
};