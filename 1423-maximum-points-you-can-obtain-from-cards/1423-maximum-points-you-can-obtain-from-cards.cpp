class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int s=0;
        if(k==0)
            return 0;
        int y=n-1;
        int t=k;
        while(t--){
            s+=cardPoints[y];
            y--;
        }
        if(k==n)
            return s;
        int j=0;
        int ans=s;
        for(int i=0;i<k;i++){
            s-=cardPoints[n-k+i];
            s+=cardPoints[i];
            ans=max(ans,s);
        }
        return ans;
    }
};