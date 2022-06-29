// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    vector<string> ans;
		    int n=s.size();
		    int x=pow(2,n);
		    for(int i=1;i<x;i++){
		        string res="";
		        for(int j=0;j<n;j++){
		            if((i & (1<<j))!=0){
		                res+=s[j];
		            }
		        }
		        ans.push_back(res);
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		    // Code here
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends