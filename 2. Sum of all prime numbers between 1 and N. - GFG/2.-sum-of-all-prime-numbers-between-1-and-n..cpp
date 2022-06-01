// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	long long int prime_Sum(int n){
   	    bool v[n+1];
   	    memset(v, true,sizeof(v));
   	    long long s=0;
   	    for(long long i=2;i*i<=n;i++){
   	        if(v[i]){
   	            for(long long j=i*i;j<=n;j+=i)
   	            v[j]=false;
   	        }
   	    }
   	    for(long long k=2;k<=n;k++)
   	    {
   	        if(v[k]){
   	        s+=k;
   	        }
   	    }
   	    // Code here
   	    return s;
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends