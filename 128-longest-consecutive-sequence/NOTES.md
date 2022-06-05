int n=nums.size();
if(n<=1)
return n;
sort(nums.begin(),nums.end());
int cur=1;
int ans=0;
for(int i=1;i<n;i++){
if(nums[i]!=nums[i-1])
{
if(nums[i]==nums[i-1]+1){
cur+=1;
}
else{
ans=max(cur,ans);
cur=1;
}
}
}
return max(ans,cur);