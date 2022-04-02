class Solution {
public:
    bool isPal(string &s,int i,int j){
         while(i<j){
            if(s[i]!=s[j])
                return 0;
                i++;
                j--;       
    }
        return 1;
}
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        
        while(i<j){
            if(s[i]!=s[j]){
                return isPal(s,i,j-1)||isPal(s,i+1,j);
            }
            i++;
            j--;
        }
       return 1; 
    }
};