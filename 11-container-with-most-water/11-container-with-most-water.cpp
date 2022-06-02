class Solution {
public:
    int maxArea(vector<int>& height) {
        int r,l,area,length, ans ;
        ans=l=0;
        r= height.size()-1;
        if(height.size()<2)
            return 0;
        while(l<r){
            int lh=height[l];
            int rh= height[r];
            length = r-l;
            area=min(lh,rh)*length;
            ans=max(ans,area);
            if(lh>rh){
                r--;
            }
            else if(rh>lh){
                l++;
            }
            else{
                l++;
                r--;
            }
        }
        return ans;
    }
};