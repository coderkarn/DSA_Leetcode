class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        set <int> st;
        int ans=INT_MIN;
        int i=0,j=0,sum=0;
        while(i<n)
        {
            if(st.count(nums[i])==0)
            {
                st.insert(nums[i]);
                sum+=nums[i];
                ans=max(ans,sum);
                i++;
            }
            else
            {
                st.erase(nums[j]);
                sum-=nums[j];
                j++;
            }
        }
        return ans;
    }
};