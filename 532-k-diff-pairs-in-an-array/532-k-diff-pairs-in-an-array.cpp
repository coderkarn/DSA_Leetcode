class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans=0;
        unordered_map <int,int> m;
        for(auto i:nums)
            m[i]++;
        for(auto i: m)
        {
            if(k==0){
                //case where both terms same required
                //e.g. 2 2 here k=0 as diff=0
                if(i.second>1)
                    ans++;
                //more than 1 such cases are there in map
            }
            else{
                if(m.find(i.first-k)!=m.end())
                    ans++;
            }
        }
        return ans;
    }
};