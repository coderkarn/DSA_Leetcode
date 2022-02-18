class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        for(auto i:num){
            while(ans.length() && ans.back()>i && k)
            {
                ans.pop_back();
                k--;
            }
            if(ans.length() || i!='0')
                ans.push_back(i);
        }
        while(ans.length() && k){
            k--;
            ans.pop_back();
        }
        if(ans.empty())
            return "0";
        else
            return ans;
    }
};