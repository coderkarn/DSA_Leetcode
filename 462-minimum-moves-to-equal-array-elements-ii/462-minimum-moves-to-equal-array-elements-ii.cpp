class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==1)
            return 0;
        long long int x=nums[n/2];
        long long int a1=0;
        for(int i=0;i<n;i++){
            a1+=abs(nums[i]-x);
        }
        return (int)a1;
    }
};