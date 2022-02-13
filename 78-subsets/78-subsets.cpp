class Solution {
public:
    void solve(vector <int> &nums,int i,vector <int> &res, vector <vector<int>> &ans)
    {
        if(i>=nums.size()){
            ans.push_back(res);
            return ;
        }
        int c=nums[i];
        res.push_back(c);
        //considering the index
        solve(nums,i+1,res,ans);
        
        //without cosidering the element
        res.pop_back();
        solve(nums,i+1,res,ans);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector <int> >ans;
        vector <int> res;
        solve(nums,0,res,ans);
        return ans;
    }
};