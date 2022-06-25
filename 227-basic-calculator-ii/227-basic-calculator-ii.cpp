class Solution {
public:
    int calculate(string s) {
        stack <int> st;
        int n=s.size();
        if(n==0)
            return 0;
        int curNum=0;
        char oper='+';
        for(int i=0;i<n;i++){
            char curChar=s[i];
            if(isdigit(curChar)){
                curNum=(curNum*10) + (curChar-'0');
            }
            if(!isdigit(curChar) && s[i]!=' ' || i==n-1)
            {
                if(oper=='-')
                    st.push(-curNum);
                else if(oper=='+')
                    st.push(curNum);
                else if(oper=='*'){
                    int t=st.top();
                    st.pop();
                    st.push(t*curNum);
                }
                else if(oper=='/'){
                    int t=st.top();
                    st.pop();
                    st.push(t/curNum);
                }
                oper=curChar;
                curNum=0;
            }
        }
        int ans=0;
        while(st.size()!=0){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};