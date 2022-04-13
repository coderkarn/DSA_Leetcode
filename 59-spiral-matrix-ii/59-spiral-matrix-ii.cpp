class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r=n-1,d=n-1;
        int t=0,l=0;
        int dir=0;
        int k=1;
        vector<vector<int>> ans(n, vector<int> (n,0));
        while(l<=r && t<=d){
            if(dir==0){
                for(int i=l;i<=r;i++){
                    ans[t][i]=k;
                    k++;
                }
                t++;
            }
            else if(dir==1){
                for(int i=t;i<=d;i++){
                    ans[i][r]=k;
                    k++;
                } 
                r--;
            }
            else if(dir==2){
                for(int i=r;i>=l;i--){
                    ans[d][i]=k;
                    k++;
                }
                d--;
            }
            else if(dir==3){
                for(int i=d;i>=t;i--){
                    ans[i][l]=k;
                    k++;
                }
                l++;
            }
            dir=(dir+1)%4;
        }
        return ans;
    }
};