// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    static bool comp(int a,int b){
        int ca=0,cb=0;
        while(a){
            ca+=(a&1);
            a=a>>1;
        }
        while(b){
            cb+=(b&1);
            b=b>>1;
        }
        if(ca==cb) return false;
        return ca>cb;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        stable_sort(arr,arr+n,comp);
        // Your code goes here
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends