class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector <int> c(26,0),v(26,0);
        string ans="";
        int n=s.size();
        
        for(int i=0;i<n;i++){
            c[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            c[s[i]-'a']--;
            if(!v[s[i]-'a'])
            {
                // Last character > s[i]
                // and its count > 0
                while(ans.size()>0 && ans.back()>s[i] &&c[ans.back()-'a']>0)
                {
                    v[ans.back()-'a']=0;
                    ans.pop_back();
                }
                ans+=s[i];
                v[s[i]-'a']=1;
            }
        }
        return ans;
    }
};