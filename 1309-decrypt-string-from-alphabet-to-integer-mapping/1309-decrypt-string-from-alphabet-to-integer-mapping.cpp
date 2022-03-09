class Solution {
public:
    string freqAlphabets(string s) {
        int n=s.size();
        string ans="";
        int i=n-1;
        while(i>=0){
            if(s[i]!='#'){
                ans+=48+s[i];
                i--;
            }
            else {
                int k=(s[i-2]-'0')*10+s[i-1]-'0';
                ans+='a'+k-1;
                i-=3;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


// while(i>=0)
//         {
//             if(s[i]!='#' && (s[i]>='1' && s[i]<='9'))
//             {
//                 output+=(s[i]+48); 
//                 i-=1;
//             }
//             else 
//             {
//                 int temp=10*(s[i-2]-'0')+(s[i-1]-'0')-1;
//                 output+=('a'+temp);
//                 i-=3;
//             }
//         }