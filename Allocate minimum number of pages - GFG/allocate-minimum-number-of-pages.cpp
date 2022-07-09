// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isfeasible(int A[],int k,int res,int N){
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
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int k) 
    {
        int l=0,r=0;
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
        //code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends