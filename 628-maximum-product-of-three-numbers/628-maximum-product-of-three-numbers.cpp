class Solution {
public:
    int maximumProduct(vector<int>& nums) {
         int mn1=10001,mn2=10001,mx1=-10001,mx2=-10001,mx3=-10001;
        for(auto& i:nums){
            if(i>mx1){
                mx3=mx2;
                mx2=mx1;
                mx1=i;
            }
            else if(i>mx2){                
                mx3=mx2;
                mx2=i;
            }
            else if(i>mx3)mx3=i;
            if(i<mn1){
                mn2=mn1;
                mn1=i;
            }else if(i<mn2)mn2=i;
        }
        return max(mn1*mn2*mx1,mx1*mx2*mx3);   

    }
};
/*        
        sort(nums.begin(),nums.end());
        int a,b,n=nums.size();
        a=nums[n-1]*nums[n-2]*nums[n-3];
        b=nums[n-1]*nums[0]*nums[1];
        if(a>b)
            return a;
        else return b;
        
                int n=nums.size();
        sort(nums.begin(),nums.end());
        return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
        */