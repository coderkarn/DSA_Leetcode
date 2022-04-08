class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int t[m+1][n+1];
        memset(t,0,sizeof(t));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(nums1[i-1]==nums2[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=0;
            }
        }
        int ans=0;              
        // Now finding the max element
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
               ans=max(ans,t[i][j]);
        }
        return ans;
    }
};