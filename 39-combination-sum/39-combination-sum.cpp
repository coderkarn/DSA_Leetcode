vector <vector <int>> ans;

void ans_true(vector <int> &v,int target, vector<int> &candidates,int idx){
    if(target==0){
        ans.push_back(v);
        return;
    }
    for (int i=idx;i<candidates.size();i++){
        if(candidates[i]>target)
            break;
        v.push_back(candidates[i]);
        
        ans_true(v,target-candidates[i],candidates,i);
        v.pop_back();
    }
}


class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <int > v;
        sort(candidates.begin(),candidates.end());
        ans.clear();
        ans_true(v,target,candidates,0);
        return ans;
    }
};