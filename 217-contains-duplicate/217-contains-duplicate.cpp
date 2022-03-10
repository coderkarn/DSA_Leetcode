class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
        
    }
};
/*Alternate Approach
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])==s.end())// if element is not present in set
                s.insert(nums[i]);// insert element
            else
                return true;//because element is present in set return true
        }
        return false; 
        */