class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue <pair<int,int>> pq;
        unordered_map <int,int> mp;
        
        for(auto x:nums)
            mp[x]++;
        for(auto i:mp)
            pq.push({i.second,i.first});
        nums.clear();
        while(k--){
            nums.push_back(pq.top().second);
            pq.pop();
        }
        return nums;
    }
};