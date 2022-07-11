// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int a[]) {
    if(n==1){
        return {a[0]};
    }
    sort(a,a+n);
    vector<int> ans;
    if(a[0]==a[n-1]){
        return {-1};
    }
    int i=0,j=n-1;
    while(i<j){
        ans.push_back(a[j]);
        j--;
        ans.push_back(a[i]);
        i++;
    }
    if(i==j){
        ans.push_back(a[i]);
    }
    return ans;
    // Complete the function
}
