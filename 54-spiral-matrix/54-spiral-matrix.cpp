class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int dir=0,up=0,left=0,right=n-1,down=m-1;
        vector <int> ans;
        while(up<=down && left<=right){
            if(dir==0){
                for(int i=left;i<=right;i++)
                    ans.push_back(matrix[up][i]);
                up++;
            }
            else if(dir==1){
                for(int i=up;i<=down;i++)
                    ans.push_back(matrix[i][right]);
                right--;
            }
            else if(dir==2){
                for(int i=right;i>=left;i--)
                    ans.push_back(matrix[down][i]);
                down--;
            }
            else if(dir==3){
                for(int i=down;i>=up;i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
            dir=(dir+1)%4;
        }
        return ans;
    }
};