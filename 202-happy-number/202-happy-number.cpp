class Solution {
public:
    int square(int n){
        int k=0;
        while(n){
            k+=(n%10)*(n%10);
            n/=10;
        }
        return k;
    }
    bool isHappy(int n) {
        set <int> s;
        while(1){
            n=square(n);
            if(n==1)
                return true;
            if(s.find(n)!=s.end())
                return false;
            s.insert(n);
        }
    }
};