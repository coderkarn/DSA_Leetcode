class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=-1;
        if(k==0) return nums[0];   
        if(n==1 && k%2==1)return -1;
        if(n==1)return nums[0]; 
        if(k>n) k=n+1;           
        
        int idx=0,r=k-1;
        
        while(r--){
            ans=max(ans,nums[idx++]);            
        }
        if(k<n) ans=max(ans,nums[k]);           
        
        return ans;
    }
};