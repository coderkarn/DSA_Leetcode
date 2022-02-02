class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector <int> ans;
        vector <int> h(26,0);
        vector <int> ph(26,0);
        int n=s.size();
        int window=p.size();
        if(n<window)
            return ans;
        //no possible vector will be formed
        int l=0,r=0;
        while(r<window){
            ph[p[r]-'a']++;
            h[s[r]-'a']++;
            r++;
        }
        r--;
        while(r<n)
        {
            if(ph==h)
                ans.push_back(l);
            r++;
            if(r!=n)
                h[s[r]-'a']++;
            h[s[l]-'a']--;
            l++;
        }
        return ans;
    }
};