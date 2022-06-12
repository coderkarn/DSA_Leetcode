class Solution {
public:
    string convertToTitle(int colNum) {
        string ans="";
        while(colNum){
            int r=colNum%26;
            if(r==0){
                ans="Z"+ans;
                colNum=colNum/26-1;
            }
            else{
                char c='A'+r-1;
                ans=c+ans;
                colNum/=26;
            }
        }
        return ans;
    }
};