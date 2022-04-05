class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int s=1;
        long long int e=num;
        while(s<=e){
            long long int m=s+(e-s)/2;
            if(m*m==num){
                return true;
            }
            else if(m*m>num){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        return false;
    }
};