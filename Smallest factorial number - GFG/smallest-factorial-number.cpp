// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    
        bool isGood(int n, int mid){
           int numberOfZeros=0;
           while(mid){
               numberOfZeros+=mid/5;
               mid/=5;
           }
           return numberOfZeros>=n;
       }
       
        int findNum(int n)
        {
            int s=0,e=1e9,mid;
           while(e-s>1){
               mid=s+(e-s)/2;
               if(isGood(n,mid)){
                   e=mid;
               }
               else{
                   s=mid;
               }
           }
           return e;
        //complete the function here
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends