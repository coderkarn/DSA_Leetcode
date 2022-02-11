class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> s1h(26,0);
        vector <int> s2h(26,0);
        int m=s1.size(),n=s2.size();
        //s2 must contain s1 -> m<=n
        if(m>n)
            return false;
        int l=0,r=0;
        while(r<m){
            s1h[s1[r]-'a']++;
            s2h[s2[r]-'a']++;
            r++;
        }
        r--;
        while(r<n)
        {
            if(s1h==s2h)
                return true;
            r++;
            if(r!=n)
                s2h[s2[r]-'a']++;
            s2h[s2[l]-'a']--;
            l++;
        }
        return false;
    }
};