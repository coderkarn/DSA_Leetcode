// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        int x=arr[i]+n;
        int l=i+1,h=size-1;
        while(l<=h){
            int m=(l+h)/2;
            if(arr[m]==x)
                return true;
            else if(arr[m]>x)
                h=m-1;
            else
                l=m+1;
        }
    }
    return false;
    //code
    
}