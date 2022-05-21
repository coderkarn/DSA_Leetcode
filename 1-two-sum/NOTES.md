vector <int> ans;
int i,j;
for(i=0;i<nums.size();i++){
for(j=i+1;j<nums.size();j++){
if(nums[i]+nums[j]==target){
ans.push_back(i);
ans.push_back(j);
break;
}
}
}
return ans;
​
2)        vector <int> ans;
unordered_map <int, int> m;
for(int i=0;i<nums.size();i++){
if(m.find(target-nums[i])!=m.end())
{
ans.push_back(m[target-nums[i]]);
ans.push_back(i);
return ans;
}
m[nums[i]]=i;
}
return ans;
​