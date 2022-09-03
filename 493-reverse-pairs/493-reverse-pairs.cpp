class Solution {
public:
    int ans=0;
    void merge(vector<int>& nums,int l,int m,int r){
        int temp[r-l+1];
        int i=l,j=m+1,k=0;
        while(i<=m && j<=r){
            if((long)nums[i]>2*(long)nums[j]){
                ans+=m-i+1;
                j++;
            }
            else
                i++;
        }
        i=l,j=m+1;
        while(i<=m && j<=r){
            if(nums[i]>nums[j]){
                temp[k++]=nums[j++];
            }
            else{
                temp[k++]=nums[i++];
            }
        }
        while(i<=m){
            temp[k++]=nums[i++];
        }
        while(j<=r){
            temp[k++]=nums[j++];
        }
        for(int i=l;i<=r;i++){
            nums[i]=temp[i-l];
        }
    }
    void mergesort(vector<int>& nums,int l,int r){
        if(l<r){
            int m=l+(r-l)/2;
            mergesort(nums,l,m);
            mergesort(nums,m+1,r);
            
            merge(nums,l,m,r);
        }
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,0,n-1);
        return ans;
    }
};