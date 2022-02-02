class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int reach=nums[0];
        for(int i=1;i<n;i++){
            if(reach==0)
                return 0;
            reach--;
            if(nums[i]>reach)
                reach=nums[i];
        }
        return true;
    }
};