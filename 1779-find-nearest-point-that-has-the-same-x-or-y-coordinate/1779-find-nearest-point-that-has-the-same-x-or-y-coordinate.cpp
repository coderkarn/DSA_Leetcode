class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int idx=-1;
        int dis= INT_MAX;
        int n=points.size();
        for(int i=0;i<n;i++){
            if(x==points[i][0] || y==points[i][1])
            {
                if(abs(x-points[i][0]) + abs(y - points[i][1]) < dis)
                {
                    dis=abs(x-points[i][0]) + abs(y - points[i][1]);
                    idx=i;
                }
            }
        }
        return idx;
    }
};