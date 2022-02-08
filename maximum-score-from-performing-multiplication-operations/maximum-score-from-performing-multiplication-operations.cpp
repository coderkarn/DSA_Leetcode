class Solution {
public:
    int dp[1001][1001];
    int solve(int i,int j,vector <int> &nums,vector<int>& mul){
        //i->iterating for multipliers
        if(i>=mul.size())
            //last element
            return 0;
        if(dp[i][j]!=-1)
            //already calculated
            return dp[i][j];
        int op1=mul[i]*nums[j]+ solve(i+1,j+1,nums,mul);
        int op2=mul[i]*nums[nums.size()-1-(i-j)]+solve(i+1,j,nums,mul);
        return dp[i][j]=max(op1,op2);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        memset(dp,-1,sizeof(dp));
            return solve(0,0,nums,mul);
    }
};