// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
bool isPal(int k){
    int x=k,s=0,r=0;
    while(k){
        r=k%10;
        s=(s*10)+r;
        k/=10;
    }
    return s==x;
}
    int PalinArray(int a[], int n)
    {
        for(int i=0;i<n;i++){
            if((isPal(a[i]))==0)
            return 0;
        }
        return 1;
    	// code here
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends