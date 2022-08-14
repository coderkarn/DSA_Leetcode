class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector <int>> ans;
        int n,i,j;
        n= numRows;
        for(i=1;i<=n;i++){
            vector <int> v;
            int c=1;
            for(j=1;j<=i;j++){
                v.push_back(c);
                c=c*(i-j)/j;
            }
            ans.push_back(v);
        }
        return ans;
        
    }
};