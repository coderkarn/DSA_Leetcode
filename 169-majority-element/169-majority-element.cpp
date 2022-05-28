class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int x=n/2;
        unordered_map <int ,int> m;
        for(auto i: nums)
            m[i]++;
        for(auto i: nums){
            if(m[i]>x)
                return i;
        }
        return 0;
    }
};