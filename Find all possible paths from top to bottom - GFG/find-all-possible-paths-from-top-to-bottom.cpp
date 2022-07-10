// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
void dfs(vector<vector<int>> &grid,vector<vector<int>> &ans,vector<int> tmp,int i,int j,int n, int m){
    if(i==n-1 && j==m-1){
        tmp.push_back(grid[i][j]);
        ans.push_back(tmp);
        tmp.clear();
        return;
    }
    if(i>=n || j>=m){
        return;
    }
    tmp.push_back(grid[i][j]);
    dfs(grid,ans,tmp,i+1,j,n,m);
    dfs(grid,ans,tmp,i,j+1,n,m);
}
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        vector<vector<int>> ans;
        vector<int> tmp;
        dfs(grid,ans,tmp,0,0,n,m);
        return ans;
        // code here
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends