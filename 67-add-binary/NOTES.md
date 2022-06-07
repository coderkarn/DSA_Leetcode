string ans;
int i=a.length()-1, j=b.length()-1;
int c=0;
while(i>=0 || j>=0){
int s=c;
if(i>=0)
s+=a[i]-'0';
if(j>=0)
s+=b[j]-'0';
c = s > 1? 1:0;
ans+=to_string(s%2);
i--;j--;
}
if(c)
ans+=to_string(c);
reverse(ans.begin(),ans.end());
return ans;