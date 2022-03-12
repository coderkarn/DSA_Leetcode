if(n==1)
return true;
for(int i=1;i<n-1;i++){
if((nums[i]>nums[i-1] && nums[i]>nums[i+1]) || (nums[i]<nums[i-1] && nums[i]<nums[i+1] ))
return false;
}
return true;