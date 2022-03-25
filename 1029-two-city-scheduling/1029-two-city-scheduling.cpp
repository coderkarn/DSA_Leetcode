class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector <int> d;
        int n=costs.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=costs[i][0];
            d.push_back(costs[i][1]-costs[i][0]);
        }
        sort(d.begin(),d.end());
        for(int i=0;i<n/2;i++){
            ans+=d[i];
        }
        return ans;
    }
};