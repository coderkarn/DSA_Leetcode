class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector <int> dp(n+1,0);
        dp[0]=nums[0];
        if(n==1)
            return dp[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i]+=max(dp[i-1],dp[i-2]+nums[i]);
            //can"t come through i-1 so no addition of nums[i-1]
            //in the initial part
        }
        return dp[n-1];
    }
};