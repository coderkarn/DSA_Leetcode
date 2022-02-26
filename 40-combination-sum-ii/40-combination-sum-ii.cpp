class Solution {
public:
    void solve(int idx,int t,vector<int>& candidates,vector<vector<int>>&ans,vector<int>& v )
    {
        if(t==0){
            ans.push_back(v);
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(i>idx && candidates[i]==candidates[i-1])
                continue;
            if(candidates[i]>t)
                break;
            v.push_back(candidates[i]);
            solve(i+1,t-candidates[i],candidates,ans,v);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(candidates.begin(),candidates.end());
        solve(0,target,candidates,ans,v);
        return ans;
    }
};