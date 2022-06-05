// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int s=0;
        int ans=INT_MAX;
        int i=0,j=0;
        while(i<n){
            s+=arr[i];
            while(s>x){
                ans=min(ans,i-j+1);
                s-=arr[j];
                j++;
            }
            i++;
        }
        return ans;
        // Your code goes here   
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends