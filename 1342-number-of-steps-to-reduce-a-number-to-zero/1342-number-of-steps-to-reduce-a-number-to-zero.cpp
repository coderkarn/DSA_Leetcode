class Solution {
public:
    int numberOfSteps(int n) {
        if(n<=2)
            return n;
        else if(n%2==0)
            return 1+numberOfSteps(n/2);
        else
            return 1+ numberOfSteps(n-1);
    }
};