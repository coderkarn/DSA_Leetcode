class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0,ans=0;ans<=nums.size();ans++){
            while(i<nums.size() && nums[i]<ans)
                i++;
            if(ans==nums.size()-i)
                return ans;
        }
        return -1;
    }
};       
     