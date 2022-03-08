class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();
        
        int c=0;
        char a,b,x,y;
        for(int i=0;i<m;i++)
        {
            if(s1[i]!=s2[i] && c==0){
                c++;
                a=s1[i];//a=b;
                b=s2[i];//b=k
            }
            else if(s1[i]!=s2[i] && c==1){
                c++;
                x=s1[i];//x=k
                y=s2[i];//y=b
            }
            else if(s1[i]!=s2[i] && c>=2){
                c++;
            }
            if(c>=3){
                return false;
                
            }
        }
        
        if(c==0)
            return true;
        if(c==2 && (a==y && b==x)){
            return true;
        }
        return false;
    }
};