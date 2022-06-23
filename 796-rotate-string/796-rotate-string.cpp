class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size(),m=goal.size();
        if(n!=m)
            return false;
        string temp=s+s;
        //cout<<temp<<"      ";
        for(int i=0;i<n;i++){
            //cout<<temp.substr(i, n)<<"    ";
            if(temp.substr(i, n)==goal)
                return true;
        }
        return false;
    }
};