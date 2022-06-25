// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	
	    void solve(int idx, string S,set <string> &s1){
	        if(idx==S.size()){
	            s1.insert(S);
	            return;
	        }
	        for(int i=idx;i<S.size();i++){
	            swap(S[i],S[idx]);
	            solve(idx+1,S,s1);
	            swap(S[i],S[idx]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    set <string> s1;
		    vector<string> ans;
		    solve(0,S,s1);
		    for(auto i:s1){
		        ans.push_back(i);
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		    // Code here there
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends