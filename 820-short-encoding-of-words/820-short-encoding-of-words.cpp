class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set <string > s1(words.begin(),words.end()), s2(words.begin(),words.end());
        for(auto x: s1){
            for(int i=1;i<x.size();i++)
                s2.erase(x.substr(i));
        }
        int ans=0;
        for(auto y:s2){
            ans+=y.size()+1;
        }
        return ans;
    }
};