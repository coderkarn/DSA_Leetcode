// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void fun(int idx,int N,int s, vector<int> &arr,vector<int> &ans)
    {
        if(idx==N){
            ans.push_back(s);
            return;
        }
        fun(idx+1,N,s+arr[idx],arr,ans);
        fun(idx+1,N,s,arr,ans);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        
        vector <int> ans;
        fun(0,N,0,arr,ans);
        return ans;
        // Write Your Code here
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends