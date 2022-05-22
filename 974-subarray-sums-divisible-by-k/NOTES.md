for(int i=0;i<n;i++)
{
currsum+=nums[i];
int rem=currsum%k;
if(rem<0)
rem+=k;
if(m.find(rem)!=m.end())
{
ans+=m[rem];
}
m[rem]++;
}