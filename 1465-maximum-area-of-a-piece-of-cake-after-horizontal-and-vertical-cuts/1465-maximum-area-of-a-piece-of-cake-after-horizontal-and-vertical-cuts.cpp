class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
                // sort the position of horizontal and vertical cuts
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        // max_h will have the max possible height i.e max difference between two consecutive horizontal cuts
        // max_w will have the max possible width  i.e max difference between two consecutive vertical cuts
		
        int max_h=horizontalCuts[0], max_w=verticalCuts[0], i;
        
        for(i=1; i<horizontalCuts.size(); ++i)
            max_h = max(max_h, horizontalCuts[i]-horizontalCuts[i-1]);
        max_h = max(max_h, h-horizontalCuts[i-1]);
        
        for(i=1; i<verticalCuts.size(); ++i)
            max_w = max(max_w, verticalCuts[i]-verticalCuts[i-1]);
        max_w = max(max_w, w-verticalCuts[i-1]);
        
        // % 10^9+7 to prevent overflow
        return ((long long)max_h*max_w)%1000000007;
    }
};