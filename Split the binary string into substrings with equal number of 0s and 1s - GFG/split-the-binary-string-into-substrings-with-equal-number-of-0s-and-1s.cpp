// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        int c1=0,c2=0;
        int ans=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                c1++;
            }
            else if(str[i]=='1'){
                c2++;
            }
            if(c1==c2)
            ans++;
        }
        if(ans==0 || c1!=c2)
            return -1;
        else    
            return ans;
        //Write your code here
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends