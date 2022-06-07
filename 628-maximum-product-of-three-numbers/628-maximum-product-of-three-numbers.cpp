class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
    }
};
/*        
        sort(nums.begin(),nums.end());
        int a,b,n=nums.size();
        a=nums[n-1]*nums[n-2]*nums[n-3];
        b=nums[n-1]*nums[0]*nums[1];
        if(a>b)
            return a;
        else return b;
        */