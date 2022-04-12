class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int > ans(2,-1);
        int i=0;
        int j=nums.size()-1;
         while(i<=j){
            int m=i+(j-i)/2;
            if(nums[m]==target){
                    ans[0]=m;
                    j=m-1;
                }
            else if(nums[m]>target)
                j=m-1;
            else{
                i=m+1;
            }
        }
        i=0;
        j=nums.size()-1;    
        while(i<=j){
            int m=i+(j-i)/2;
            if(nums[m]==target){
                    ans[1]=m;
                    i=m+1;
                }
            else if(nums[m]>target)
                j=m-1;
            else{
                i=m+1;
            }
        }
        return ans;    
    }
};