class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        vector <string> v;
        bool f=false;
        for(int i=0;i<n;i++){
            if(s[i]==' ' && f==true){
                v.push_back(ans);
                ans.clear();
                f=false;
            }
            else if(s[i]!=' ')
                {
                    ans+=s[i];
                    f=true;
                }
        }
        v.push_back(ans);
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i];
        // }
        reverse(v.begin(),v.end());
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i];
        // }
        string res="";
        for(int i=0;i<v.size();i++){
            if(v[i] != ""){
                res+=v[i];
                res+=" ";
            }
            
        }
        int k=res.size();
        return res.substr(0,k-1);
        
        
        
        
        
        
        
        
        
        
        // int n=s.size();
        // string ans="";
        // int i=n-1;
        // while(i>=0){
        //     string res="";
        //     while(s[i]!=' '&& i>0){
        //         res+=s[i];
        //         i--;
        //     }
        //     if(i==0 && s[i]!=' ')
        //         res+=s[i];
        //     reverse(res.begin(),res.end());
        //     if(res.size())
        //         ans+=res+" ";
        //     i--;
        // }
        // int k=ans.size();
        // return ans.substr(0,k-1);
    }
};