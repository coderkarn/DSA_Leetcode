class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-1 && nums[i]<=0;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int l=i+1,h=n-1;
            while(l<h){
                int s=nums[i]+nums[l]+nums[h];
                if(s<0)
                    l++;
                else if(s>0)
                    h--;
                else{
                    ans.push_back({nums[i],nums[l],nums[h]});
                    while(l<h && nums[l]==nums[l+1])
                        l++;
                    while(l<h && nums[h]==nums[h-1])
                        h--;
                    l++;
                    h--;
                }
            }
        }
        return ans;
    }
};