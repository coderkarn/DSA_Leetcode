class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<=r){
               int h=(l+r)/2;
            if(nums[h]==target)
                return h;
            else if(nums[h]>=nums[l])
                //uniform increase portion on left side
            {
                if(target<=nums[h] && target >= nums[l])
                    r=h-1;
                else
                    l=h+1;
            }
            else{
                if(target>=nums[h] && target <= nums[r])
                    l=h+1;
                else
                    r=h-1;                
            }
        }
        return -1;
    }
};