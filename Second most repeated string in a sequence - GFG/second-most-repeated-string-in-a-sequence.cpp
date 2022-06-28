// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        int mx=0;
        string s="";
        unordered_map <string,int>m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
            if(m[arr[i]]>mx){
                mx=m[arr[i]];
                s=arr[i];
            }
        }
        m.erase(s);
        string ans;
        mx=0;
        for(auto i:m){
            if(i.second>mx){
                mx=i.second;
                ans=i.first;
            }
        }
        return ans;
        //code here.
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends