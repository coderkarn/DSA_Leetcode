// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        vector<vector<int> >ans;
        set <vector<int> >s;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int sum=k-arr[i]-arr[j];
                int l=j+1,r=n-1;
                while(l<r){
                    if(arr[l]+arr[r]==sum){
                        s.insert({arr[i],arr[j],arr[l],arr[r]});
                        l++;
                        r--;
                    }
                    else if(arr[l]+arr[r]>sum){
                        r--;
                    }
                    else{
                        l++;
                    }
                }
             }
         }
         for(auto i:s){
             ans.push_back(i);
         }
         return ans;
        // Your code goes here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends