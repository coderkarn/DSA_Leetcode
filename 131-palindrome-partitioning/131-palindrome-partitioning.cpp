class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> res;
        solve(0,s,res,ans);
        return ans;
    }
    void solve(int idx,string s,vector<string> &res,vector<vector<string>> &ans){
        if(idx==s.size()){
            ans.push_back(res);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(isPal(s,idx,i)){
                res.push_back(s.substr(idx,i-idx+1));
                solve(i+1,s,res,ans);
                res.pop_back();
            }
        }
    }
    bool isPal(string s,int l,int r){
        while(l<=r){
            if(s[l++]!=s[r--])
                return false;
        }
        return true;
    }
};