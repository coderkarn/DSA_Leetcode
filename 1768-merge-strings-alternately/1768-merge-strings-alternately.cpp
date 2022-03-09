class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size(),n=word2.size();
        int i=0,j=0;
        string ans="";
        int p=m+n;
        while(p--){
            if(i<m)
                ans+=word1[i++];
            if(j<n)
                ans+=word2[j++];
        }
        return ans;
    }
};