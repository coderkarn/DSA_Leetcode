class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[idx]=nums[i];
                idx++;
            }
        }
        while(idx<n){
            nums[idx]=0;
            idx++;
        }
    }
};