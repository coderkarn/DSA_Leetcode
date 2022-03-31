class Solution {
public:
    int numSubarray(vector<int>& nums,int mid){
        int c=0,tmpS=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(tmpS+nums[i]<=mid)
                tmpS+=nums[i];
            else{
                c++;
                tmpS=nums[i];
            }
        }
        c++;
        return c;
    }
    
    int splitArray(vector<int>& nums, int m) {
        //Binary Search on Answer
        int l=0,r=0,n=nums.size();
        for(int i=0;i<n;i++){
            l=max(l,nums[i]);
            r+=nums[i];
        }
        int mid=0,ans=0;
        while(l<=r){
            mid=(l+r)/2;
            //gives the count of subarray for the mid value
            int c=numSubarray(nums,mid);
            if(c<=m){
                r=mid-1;
                ans=mid;
            }
            else
                l=mid+1;
        }
        return ans;
    }
};