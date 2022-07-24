class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            sum += nums[i];
        }
        int lsum = 0;
        int rsum = sum-lsum;
        for(int i=0;i<nums.size();i++)
        {
            rsum -= nums[i];
            if(rsum == lsum)
                return i;
            lsum += nums[i];
        }
        return -1;
    }
};