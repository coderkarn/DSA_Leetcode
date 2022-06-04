class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                ans++;
            else{
                if(ans!=0)
                    ans--;
                else
                    c++;
            }
        }
        return c+ans;
    }
};