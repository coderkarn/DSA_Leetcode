class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0,r=0;
        unordered_map <int,int> rem;
        int last=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            r=sum%k;
            if(r<0){
                r+=k;
            }
            
            if(rem.find(r)!=rem.end()){
                return true;
            }
            rem[last]++;
            last=r;
        }
        return false;
    }
};