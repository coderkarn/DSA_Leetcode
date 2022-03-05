class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 10001;
    
		if(nums.size() == 1)
			return nums[0];
    
		vector<int> dp(n,0);
		for(auto i: nums)
			dp[i] += i;
    
		for(int i=2; i<10001; i++)
			dp[i] = max(dp[i-2] + dp[i], dp[i-1]);
        
		return dp[10000];
    }
};