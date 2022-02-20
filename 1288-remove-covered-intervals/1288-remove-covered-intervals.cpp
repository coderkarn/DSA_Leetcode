class Solution {
public:
    static bool comp(vector <int> &a,vector <int> &b)
    {
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(n==0)
            return 0;
        int ans=1;
        sort(intervals.begin(),intervals.end(),comp);
        
        int s=intervals[0][0];
        int e=intervals[0][1];
        
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=s && intervals[i][1]<=e)
                continue;
            else{
                s=min(intervals[i][0],s);
                e=max(intervals[i][1],e);
                ans++;
            }
        }
        return ans;
    }
};