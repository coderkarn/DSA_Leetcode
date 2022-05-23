int n=cardPoints.size();
int s=0;
if(k==0)
return 0;
for(int i=0;i<n;i++)
s+=cardPoints[i];
if(k==n)
return s;
int j=0;
while(j<n-k){
s-=cardPoints[j];
j++;
}
int ans=s;
for(int i=0;i<k;i++){
s-=cardPoints[n-k+i];
s+=cardPoints[i];
ans=max(s,ans);
}
return ans;