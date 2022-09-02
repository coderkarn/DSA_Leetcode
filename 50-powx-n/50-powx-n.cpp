class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        else if(n<0){
            n++;
            return 1/x * myPow(1/x,-n);
        }
        else{
            if(n==1)
                return x;
            else if(n%2==0)
                return myPow(x*x,n/2);
            else
                return x*myPow(x*x,n/2);
        }
    }
};