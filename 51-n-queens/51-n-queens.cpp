class Solution {
public:
    bool isSafe(int row,int col,vector <string>& board ,int n){
        int x=row,y=col;
        //checking upper diagonal
        while(row>=0 && col>=0){
            if(board[row][col]=='Q')
                return false;
            row--;
            col--;
        }
        row=x;
        col=y;
        //checking Same Row
        while(col>=0){
            if(board[row][col]=='Q')
                return false;
            col--;
        }
        col=y;
        //Checking lower Diagonal
        while(row<n && col>=0){
            if(board[row][col]=='Q')
                return false;
            row++;
            col--;            
        }
        return true;
    }
    
    void solve(int col,int n,vector <string>& board ,vector<vector<string>> &ans)
    {
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n))
            {
                board[row][col]='Q';
                //Recursive Step
                solve(col+1,n,board,ans);
                //backtracking Step
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,n,board,ans);
        return ans;
    }
};