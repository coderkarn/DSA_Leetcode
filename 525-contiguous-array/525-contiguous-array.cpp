class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map <int,int> m;
        m[0]=-1;
        for(int i=0;i<n;i++){
            nums[i]==0? nums[i]=-1:nums[i]=1;
        }
        
        int ans=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(m.find(sum)!=m.end())
            {
                ans=max(ans,i-m[sum]);
            }
            else{
                m[sum]=i;
            }
        }
        return ans;
    }
};