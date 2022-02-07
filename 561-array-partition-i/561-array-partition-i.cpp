class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        if(n==0)
            return 0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            i++;
        }
        return sum;
    }
};