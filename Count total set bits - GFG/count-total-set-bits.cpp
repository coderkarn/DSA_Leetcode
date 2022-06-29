// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int pow2(int n){
        int c=0;
        while((1<<c)<=n){
            c++;
        }
        return c-1;
    }
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        if(n==0){
            return 0;
        }
        int a=pow2(n);
        
        int till2x=a*(1<<(a-1));// 3*2^(4-1)
        int f1=n-(1<<a)+1;
        int rest=n-(1<<a);
        int ans=till2x+f1+countSetBits(rest);
        return ans;
        // Your logic here
    }
};


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends