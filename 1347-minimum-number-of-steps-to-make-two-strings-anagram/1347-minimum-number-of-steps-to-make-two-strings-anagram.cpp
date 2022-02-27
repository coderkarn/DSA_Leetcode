class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.size(),m=t.size();
        int freq[26]={0};
        for(auto x:s)
            freq[x-'a']++;
        
        for(auto x:t){
            freq[x-'a']--;
        }
        int ans=0;
        for(auto x:freq){
            if(x<0)
                ans+=-x;
        }
        return ans;
    }
};