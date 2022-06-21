class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        int i=n-1;
        while(i>=0){
            string res="";
            while(s[i]!=' '&& i>0){
                res+=s[i];
                i--;
            }
            if(i==0 && s[i]!=' ')
                res+=s[i];
            reverse(res.begin(),res.end());
            if(res.size())
                ans+=res+" ";
            res.erase();
            i--;
        }
        int k=ans.size();
        return ans.substr(0,k-1);
    }
};