class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<bool>> v(m, vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(word[0]==board[i][j] && solve(i,j,0,word,board,v))
                    return true;
            }
        }
        return false;
    }
    
    bool solve(int i,int j,int idx, string word,vector<vector<char>>& board, vector<vector<bool>> &v){
        if(idx==word.size())
            return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[i].size() || word[idx]!=board[i][j] || v[i][j])
            return false;
        v[i][j]=true;
        if(solve(i+1,j,idx+1,word,board,v) ||
           solve(i,j+1,idx+1,word,board,v) ||
           solve(i-1,j,idx+1,word,board,v) ||
           solve(i,j-1,idx+1,word,board,v)){
            return true;
        }
        v[i][j]=false;
        return false;
    }
};