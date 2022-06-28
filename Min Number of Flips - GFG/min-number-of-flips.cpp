// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minFlips (string S)
{
    int c1=0,c2=0;
    for(int i=0;i<S.size();i++){
        //0 1 0 1 case;
        if(i%2==0 && S[i]!='0'){
            //even and not 0
            c1++;
        }
        else if(i%2!=0 && S[i]!='1'){
            c1++;
        }
    }
    for(int i=0;i<S.size();i++){
        //1 0 1 0 1 case;
        if(i%2==0 && S[i]!='1'){
            //even and not 0
            c2++;
        }
        else if(i%2!=0 && S[i]!='0'){
            c2++;
        }
    }
    // cout<<c1<<c2<<endl;
    return min(c1,c2);
    // your code here
}