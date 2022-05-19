class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini=p[0];
        int ans=0,c=0;
        for(int i=1;i<p.size();i++){
            c=p[i]-mini;
            ans=max(ans,c);
            mini=min(p[i],mini);
        }
        return ans;
    }
};