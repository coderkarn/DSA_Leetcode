class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int freq[101]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                freq[matrix[i][j]]++;
            }
            for(int i=1;i<n+1;i++)
            {
                if(freq[i]!=1)
                    return false;
            }
            for(int i=1;i<n+1;i++)
                freq[i]=0;  
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                freq[matrix[j][i]]++;
            }
            for(int i=1;i<n+1;i++)
            {
                if(freq[i]!=1)
                    return false;
            }
            for(int i=1;i<n+1;i++)
                freq[i]=0;
            
        }
        return true;
    }
};