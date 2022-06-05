// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
long long max(long long a,long long b){
    if(a>=b)
    return a;
    return b;
}
long long min(long long a,long long b){
    if(a<=b)
    return a;
    return b;
}
	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long ans=arr[0];
	    long long min_pro=arr[0],max_pro=arr[0];
	    for(int i=1;i<n;i++){
	        long long c1=min_pro*arr[i];
	        long long c2=max_pro*arr[i];
	        min_pro=min(arr[i],min(c1,c2));
	        max_pro=max(arr[i],max(c1,c2));
	        ans=max(ans,max_pro);
	    }
	    return ans;
	    // code here
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends