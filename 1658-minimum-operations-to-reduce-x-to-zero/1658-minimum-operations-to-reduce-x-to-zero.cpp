class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
            s+=nums[i];
        int k=s-x;
        if(k==0)
            return n;
        int cur=0,ans=0;
        unordered_map <int,int> m;
        for(int i=0;i<n;i++){
            cur+=nums[i];
            if(cur==k)
                ans=i+1;
            if(m.find(cur)==m.end())
                m[cur]=i;
            if(m.find(cur-k)!=m.end()){
                ans=max(ans,i-m[cur-k]);
            }
        }
        if(ans==0)
            return -1;
        return n-ans;
    }
};