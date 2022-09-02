class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore voting algorithm
        int n=nums.size();
        int can=nums[0],votes=1;
        for(int i=1;i<n;i++){
            if(votes==0){
                can=nums[i];
                votes=1;
            }
            else{
                if(nums[i]==can)
                    votes++;
                else
                    votes--;
            }
        }
        return can;
        // int n=nums.size();
        // int x=n/2;
        // unordered_map <int ,int> m;
        // for(auto i: nums)
        //     m[i]++;
        // for(auto i: nums){
        //     if(m[i]>x)
        //         return i;
        // }
        // return 0;
    }
};