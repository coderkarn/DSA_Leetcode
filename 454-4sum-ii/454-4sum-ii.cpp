class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int,int>m;
        for(auto i:nums1){
            for(auto j:nums2)
            {
                m[i+j]++;
            }
        }
        int ans=0;
        for(auto p:nums3){
            for(auto q:nums4)
            {
                int s=p+q;
                ans+=m[-s];
            }
        }
        return ans;
    }
};