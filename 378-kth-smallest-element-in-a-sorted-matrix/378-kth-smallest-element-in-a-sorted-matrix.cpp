class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        priority_queue<int> pq;
        for(auto &c:m){
            for(auto &d:c){
                pq.push(d);
                if(pq.size()>k) pq.pop();
            }
        }
        return pq.top(); 
    }
};