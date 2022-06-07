class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int c=0;
        int i=a.size()-1,j=b.size()-1;
        while(i>=0 || j>=0){
            int s=c;
            if(i>=0)
                s+=a[i]-'0';
            if(j>=0)
                s+=b[j]-'0';
            c=s>1 ? 1:0;
            ans+=to_string(s%2);
            i--;
            j--;
        }
        if(c)
            ans+=to_string(c);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};