class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)
            return n;
        int ans=0;
        unordered_set <int> s;
        for(int i:nums)
            s.insert(i);
        for(int i=0;i<n;i++){
            if(s.find(nums[i]-1)==s.end()){
                //num not found
                int j=nums[i];
                while(s.find(j)!=s.end())
                    j++;
                ans=max(ans,j-nums[i]);
            }
        }
        return ans;
    }
};