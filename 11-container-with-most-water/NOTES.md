int r,l,area,length, ans ;
ans=l=0;
r= height.size()-1;
if(height.size()<2)
return 0;
while(l<r){
int lh=height[l];
int rh= height[r];
length = r-l;
if(lh>=rh){
area= rh*length;
r--;
ans=max(ans,area);
}
else{
area= lh*length;
l++;
ans=max(ans,area);
}
}
return ans;