class Solution {
public:
    bool isfeasible(vector<int>& A,int k,int res,int N){
        int c=1,s=0;
        for(int i=0;i<N;i++){
            if(s+A[i]>res){
                c++;
                s=A[i];
            }else{
                s+=A[i];
            }
        }
        return k>=c;
    }
    
    int splitArray(vector<int>& A, int k) {
        int l=0,r=0;
        int N=A.size();
        for(int i=0;i<N;i++){
            if(l<A[i]){
                l=A[i];
            }
            r+=A[i];
        }
        int ans=0;
        while(l<=r){
            int m=(l+r)/2;
            if(isfeasible(A,k,m,N)){
                ans=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
};