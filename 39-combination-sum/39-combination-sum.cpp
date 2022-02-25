class Solution {
public:
    
    void solve(int idx,vector<int>& candidates,int target,vector <vector<int>>&ans,vector <int>&v)
    {
        if(idx==candidates.size()){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
        if(candidates[idx]<=target){
            v.push_back(candidates[idx]);
            solve(idx,candidates,target-candidates[idx],ans,v);
            v.pop_back();
        }
        solve(idx+1,candidates,target,ans,v);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <int > v;
        vector <vector <int> > ans;
        solve(0,candidates,target,ans,v);
        return ans;
    }
};