class Solution {
public:
    int countOdds(int low, int high) {
        int ans=0;
        int start=0;
        if(low%2!=0){
            start=low;
        }
        else{
            start=low+1;
        }
        while(start<=high){
            ans++;
            start+=2;
        }
        return ans;
    }
};