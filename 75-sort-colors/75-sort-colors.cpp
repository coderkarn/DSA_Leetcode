class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int c1=0,c2=0,c3=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                c1++;
            else if(nums[i]==1)
                c2++;
            else
                c3++;
        }
        int j=0;
        while(c1--)
            nums[j]=0,j++;
        while(c2--)
            nums[j]=1,j++;
        while(c3--)
            nums[j]=2,j++;
    }
};