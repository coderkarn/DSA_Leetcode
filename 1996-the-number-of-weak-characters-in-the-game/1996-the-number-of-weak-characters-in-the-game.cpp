class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& pro) {
        sort(pro.begin(),pro.end(),comp);
        int n=pro.size();
        int m=pro[n-1][1];
        int ans=0;
        for(int i=n-2;i>=0;i--){
            if(pro[i][1]<m){
                ans++;
            }
            m=max(pro[i][1],m);
        }
        return ans;
    }
};