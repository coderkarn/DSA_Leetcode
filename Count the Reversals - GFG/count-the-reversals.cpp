// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    stack <char> stk;
    int c1=0,c2=0;
    for(int i=0;i<s.size();i++){
        if(!stk.empty() && s[i]=='}' && stk.top()=='{'){
            stk.pop();
        }
        else if(s[i]=='{'){
            stk.push(s[i]);
        }
        else{
            c1++;
        }
    }
        c2=stk.size();
        if((c1+c2)%2!=0)
        return -1;
        else if(c1%2==0 && c2%2==0){
            return (c1+c2)/2;
        }
        else{
            return (c1+c2)/2+1;
    }
    // your code here
}