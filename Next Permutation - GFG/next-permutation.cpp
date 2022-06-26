// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> &nums){
        int i=0,j=0;
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break;
            }
        }
        if(i<0)
            reverse(nums.begin(),nums.end());
        else{
            for(j=n-1;j>=0;j--){
                if(nums[j]>nums[i])
                    break;
            }
            swap(nums[j],nums[i]);
            reverse(nums.begin()+i+1,nums.end());
        }
        return nums;
        /*int i=0,j=0;
        for(int i=N-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                break;
            }
        }
        if(i<0) 
            reverse(arr.begin(),arr.end());
        else{
            for(j=N-1;j>=0;j--){
                if(arr[j]>arr[i])
                    break;
            }
            swap(arr[j],arr[i]);
            reverse(arr.begin()+i+1,arr.end());
        }
        return arr;*/
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends