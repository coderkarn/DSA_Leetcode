class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int index,diff,ans=0;
        if(nums.size()<3)
            return 0;
        for(int i=0;i<nums.size()-2;i++) {
            if((nums[i+1]-nums[i])==(nums[i+2]-nums[i+1])) {
                index=i+2;
                diff=nums[i+1]-nums[i];
                while(index<nums.size() && nums[index]-nums[index-1]==diff) {
                    index++;
                }
                index--;
                diff=index-i+1-2;
                ans=ans+(diff)*(diff+1)/2;
                i=index-1;
            }
        }
        return ans;
    }
};