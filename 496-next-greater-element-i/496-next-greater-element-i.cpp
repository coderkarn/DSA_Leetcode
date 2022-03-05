class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        for(int i=0;i<nums1.size();i++){
            int j=nums2.size()-1;
            int max=-1;
            while(nums1[i]!=nums2[j]){
                if(nums2[j]>nums1[i]){
                    max=nums2[j];
                }
                j--;
            }
            ans.push_back(max);
        }
        return ans;
    }
};