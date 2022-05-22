class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        unordered_map <int,int> m;
        m[0]=1;
        int s=0,r=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
            r=s%k;
            if(r<0)
                r+=k;
            if(m.find(r)!=m.end()){
                ans+=m[r];
                m[r]=m[r]+1;
            }else
                m[r]=1;
        }
        return ans;
    }
};