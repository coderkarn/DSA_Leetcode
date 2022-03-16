class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n=pushed.size();
        stack <int> s;
        int idx=0;
        for(int i=0;i<n;i++){
            s.push(pushed[i]);
            while(!s.empty() && idx<n && s.top()==popped[idx])
            {
                s.pop();
                idx++;
            }
        }
        return idx==n;
    }
};