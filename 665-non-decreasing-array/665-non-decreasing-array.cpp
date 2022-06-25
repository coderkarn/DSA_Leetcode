class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
                int cnt = 0;             
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[i-1]){
                if(++cnt > 1) return false;
                if(i == 1 || nums[i-2] <= nums[i]) nums[i-1] = nums[i];    
                else nums[i] = nums[i-1];
            }
        }
        return true;
       /* int c=0;
        int n=nums.size();
        if(n<=2)
            return true;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                c++;
                if(i>0 && nums[i-1]>nums[i+1] && i+1<n)
                    return false;
            }
        }
        return c==0||c==1;*/
    }
};