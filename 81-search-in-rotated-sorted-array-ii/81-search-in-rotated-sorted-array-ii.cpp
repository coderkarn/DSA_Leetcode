class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int m=(l+r)/2;
            if(nums[m]==target)
                return true;
            if((nums[l]==nums[m]) && (nums[r]==nums[m])){
                l++;
                r--;
            }
            else if(nums[m]>=nums[l])
            {
                 //uniform increase portion on left side
                if(target<=nums[m] && target>=nums[l])
                    r=m-1;
                else
                    l=m+1;
            }
            else{
                if(target>=nums[m] && target<=nums[r])
                    l=m+1;
                else
                    r=m-1;
            }
        }
        return false;
    }
};