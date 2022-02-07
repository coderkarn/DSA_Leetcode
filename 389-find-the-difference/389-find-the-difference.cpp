class Solution {
public:
    char findTheDifference(string s, string t) {
        string ans="";
        unordered_map <char,int> m,n;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(m[t[i]]!=0)
                m[t[i]]--;
            else if(m[t[i]]==0)
                ans+=t[i];
        }
        return ans[0];
    }
};