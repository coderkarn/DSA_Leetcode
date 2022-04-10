class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n=ops.size();
        stack <int> st;
        for(int i=0;i<n;i++){
            if(ops[i]=="+"){
                int a=st.top();
                st.pop();
                int x=a+st.top();
                st.push(a);
                st.push(x);
            }
            else if(ops[i]=="C")
                st.pop();
            else if(ops[i]=="D")
                st.push(2*st.top());
            else
                st.push(stoi(ops[i]));
        }
        int ans=0;
        while(st.size() != 0){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};