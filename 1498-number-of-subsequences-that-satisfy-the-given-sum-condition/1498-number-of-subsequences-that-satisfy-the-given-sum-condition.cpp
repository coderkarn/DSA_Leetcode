class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1;
        sort(nums.begin(),nums.end());
        int m=1000000007;
        vector <int> pow(n,1);
        for(int i=1;i<n;i++)
            pow[i]=(pow[i-1]*2)%m;
        
        int ans=0;
        while(s<=e){
            if(nums[s]+nums[e]<=target){
                ans+=pow[e-s];
                ans%=m;
                s++;
            }
            else{
                e--;
            }
        }
        return ans;
    }
};