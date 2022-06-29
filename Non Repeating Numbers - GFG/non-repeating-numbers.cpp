// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int x=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
        }
        int r_bit=x & ~(x-1);
        int a1=0,a2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]& r_bit){
                a1^=nums[i];
            }
            else{
                a2^=nums[i];
            }
        }
        return {min(a1,a2),max(a1,a2)};
        // Code here.
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends