class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_set <int> s;
        // for(auto i:nums){
        //     if(s.find(i)!=s.end()){
        //         return i;
        //     }
        //     s.insert(i);
        // }
        // return -1;
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        
        slow=nums[0];
        while(slow!=fast){
            fast=nums[fast];
            slow=nums[slow];
        }
        return fast;
    }
};