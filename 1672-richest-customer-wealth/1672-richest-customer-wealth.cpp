class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich=0;
        int sum=0;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            rich=max(rich,sum);
            sum=0;
        }
        return rich;
    }
};