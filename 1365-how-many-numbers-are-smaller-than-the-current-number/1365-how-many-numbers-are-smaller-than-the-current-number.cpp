class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans;
        for(int i=0;i<n;i++){
            int temp=nums[i];
            int c=0;
            for(int j=0;j<n;j++)
            {
                if((i!=j) && nums[i]>nums[j])
                    c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};