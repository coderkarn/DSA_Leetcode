class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        //priority queue for storing max bricks used
        int i=0;
        priority_queue <int> q;
        for(;i<heights.size()-1;i++){
            if(heights[i+1]<=heights[i])
                continue;
            int d=heights[i+1]-heights[i];
            if(d<=bricks){
                bricks-=d;
                q.push(d);
            }
            else if(ladders>0){
                if(q.size())
                {
                    //condition for using ladder instead of bricks
                    //As large numbers of bricks will be wasted instead of 1 ladder
                    //So we should use ladder instead of bricks for such cases
                    int x=q.top();
                    if(x>d){
                        bricks+=x;
                        q.pop();
                        q.push(d);
                        bricks-=d;
                    }
                }
                ladders--;
            }
            else
                break;
        }
        return i;
    }
};