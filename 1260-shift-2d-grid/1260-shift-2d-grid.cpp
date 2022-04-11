class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> temp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                temp.push_back(grid[i][j]);
            //1 2 3 4 5 6 7 8 9
            //9 1 2 3 4 5 6 7 8
            //m->row n->col
        }
        vector <int> res;
        vector <vector<int> > ans;
        int x=temp.size();
        k%=x;
        //x->9;
        for(int i=x-k;i<x;i++){
            res.push_back(temp[i]);
            if(res.size()==n){
                ans.push_back(res);
                res.clear();
            }
        }
        for(int i=0;i<x-k;i++){
            res.push_back(temp[i]);
            if(res.size()==n){
                ans.push_back(res);
                res.clear();
            }
        }
        return ans;
    }
};