class Solution {
public:
    int longestPalindrome(string s) {
        bool odd=false;
        int ans=0;
        unordered_map <char,int> m;
        for(auto i:s)
            m[i]++;
        for(auto &x:m){
            if(x.second%2==0)
                ans+=x.second;
            else{
                odd=true;
                ans+=x.second-1;
            }
        }
        if(odd)
            ans++;
        return ans;
    }
};