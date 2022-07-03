class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        if(n<2)
            return n;
        int pre=nums[1]-nums[0];
        int ans= pre!=0 ? 2:1;
        for(int i=2;i<n;i++){
            int d=nums[i]-nums[i-1];
            if((d>0 && pre<=0)||(d<0 && pre>=0)){
                ans++;
                pre=d;
            }
        }
        return ans;
    }
};