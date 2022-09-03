class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set <int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int ans=0;
        for(auto i:nums){
            if(s.find(i-1)==s.end()){
                int k=0;
                while(s.find(i)!=s.end()){
                    i++;
                    k++;
                }
                ans=max(ans,k);
            }
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // int n=nums.size();
        // if(n<=1)
        //     return n;
        // int ans=0;
        // unordered_set <int> s;
        // for(int i:nums)
        //     s.insert(i);
        // for(int i=0;i<n;i++){
        //     if(s.find(nums[i]-1)==s.end()){
        //         //num not found
        //         int j=nums[i];
        //         while(s.find(j)!=s.end())
        //             j++;
        //         ans=max(ans,j-nums[i]);
        //     }
        // }
        // return ans;
    }
};