class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int p=1;
        int dp[n];
        int t[n];
        dp[0]=nums[0];
        int ans=INT_MIN;
        for(int i=1;i<n;i++){
            if(nums[i]!=0 && dp[i-1]!=0){
                dp[i]=dp[i-1]*nums[i];
            }
            else{
                dp[i]=nums[i];
            }
        }
        for(int i=0;i<n;i++)
            t[i]=0;
        t[n-1]=nums[n-1];
        
        for(int i=n-2;i>=0;i--){
            if(nums[i]!=0 && t[i+1]!=0){
                t[i]=t[i+1]*nums[i];
            }
            else{
                t[i]=nums[i];
            }
        }
        
        for(int i=0;i<n;i++){
            ans=max(ans,max(t[i],dp[i]));
        }
        return ans;
    }
};