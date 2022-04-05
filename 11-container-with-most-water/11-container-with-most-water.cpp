class Solution {
public:
    int maxArea(vector<int>& height) {
        int r,l,area,length, max ;
        max=l=0;
        r= height.size()-1;
        if(height.size()<2)
            return 0;
        while(l<r){
            int lh=height[l];
            int rh= height[r];
            length = r-l;
            if(lh>=rh){
                area= rh*length;
                r--;
                if (area>max)
                    max=area;
            }
            else{
                area= lh*length;
                l++;
                if (area>max)
                    max=area;
            }        
        }
        return max;
    }
};