class Solution {
public:
static bool comp(vector<int>& A,  vector<int>& B){
        if(A[0] == B[0]){
            return A[1] > B[1];
        } 
        return A[0] < B[0];
    }
    
    static bool comp1( const vector<int>& A, const vector<int>& B){
        return A[1] < B[1];
    }
    
    int maxEnvelopes(vector<vector<int>>& nums) {
        int n = nums.size();
        sort(begin(nums), end(nums), comp);
        vector<vector<int>> ans;
        ans.push_back(nums[0]);
        for(int i = 1; i < n; i++){
            if(nums[i][0] > ans.back()[0] and nums[i][1] > ans.back()[1]){
                ans.push_back(nums[i]);
            }else{
                int idx = lower_bound(begin(ans), end(ans), nums[i], comp1) - ans.begin();
                ans[idx] = nums[i];
            }
        }
        
        return ans.size();
    }
};