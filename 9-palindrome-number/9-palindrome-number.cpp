class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int k=x;
        long int s=0;
        while(k){
            int r=k%10;
            s=(s)*10+r;
            k=k/10;
        }
        return s==x;
    }
};