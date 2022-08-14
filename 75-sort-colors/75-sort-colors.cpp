class Solution {
public:
    void sortColors(vector<int>& nums) {
        //What is Dutch national flag algorithm?
// One algorithm is to have the top group grow down from the top of the array, the bottom group grow up from the bottom, and keep the middle group just above the bottom. The algorithm indexes three locations, the bottom of the top group, the top of the bottom group, and the top of the middle group.

// Dutch national flag problem
        int n=nums.size();
        int i=0,j=0,k=n-1;
        while(j<=k){
            if(nums[j]==0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }
            else{
                j++;
            }
        }
    }
};