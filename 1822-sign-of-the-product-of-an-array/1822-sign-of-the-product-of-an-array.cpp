class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans*=-1;
            }
            if(nums[i]==0){
                ans=0;
                break;
            }
        }
        return ans;
    }
};