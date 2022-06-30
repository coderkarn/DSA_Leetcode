class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==1)
            return 0;
        if(n==2)
            return abs(nums[1]-nums[0]);
        long long int x=nums[n/2];
        long long int y=nums[n/2+1];
        long long int a1=0,a2=0;
        for(int i=0;i<n;i++){
            a1+=abs(nums[i]-x);
            a2+=abs(nums[i]-y);
        }
        return (int)min(a1,a2);
    }
};