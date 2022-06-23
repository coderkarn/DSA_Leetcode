class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>> m;
        for(int i=0;i<n;i++){
            string t=strs[i];
            sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(t);
        }
        vector<vector<string> >ans;
        for(auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }
};