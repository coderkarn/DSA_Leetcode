class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        string a=s;
        reverse(a.begin(),a.end());
        int t[n+1][n+1];
        for(int i=0;i<=n;i++)
            t[i][0]=0;
        for(int i=0;i<=n;i++)
            t[0][i]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==a[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return n-t[n][n];
    }
};