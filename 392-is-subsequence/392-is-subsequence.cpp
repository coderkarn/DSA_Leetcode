class Solution {
public:
    bool isSubsequence(string s, string t) {
        /* Alternate: DP (Solution)
        Find length of LCS of S and T 
        if it is equal to s then true else false
        */
        
        int n=s.size();
        int j=0;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]==s[j])
                j++;
        }
        if(j==n)
            return true;
        return false;
    }
};