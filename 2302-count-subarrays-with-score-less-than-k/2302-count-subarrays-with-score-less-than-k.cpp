class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long ans=0,sum=0,j=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum*(i-j+1)>=k){
                sum-=nums[j];
                j++;
            }
            ans+=i-j+1;
        }
        return ans;
    }
};