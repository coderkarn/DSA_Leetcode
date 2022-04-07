class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int n=stones.size();
        if(n==1)
            return stones[0];
        for(int i=0;i<n;i++)
            pq.push(stones[i]);
        while(!pq.empty()){
            if(pq.size()==0)
                return 0;
            if(pq.size()==1)
                return pq.top();
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x!=y)
                pq.push(x-y);
        }
        return 0;
    }
};