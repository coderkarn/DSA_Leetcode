class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int x=-1,y=-1;
        int cx=0,cy=0;
        for(auto i: nums){
            if(i==x)
                cx++;
            else if(i==y)
                cy++;
            else if(cx==0)
                x=i,cx=1;
            else if(cy==0)
                y=i,cy=1;
            else
                cx--,cy--;
        }
        cx=0,cy=0;
        for(int i=0;i<n;i++){
            if(nums[i]==x)
                cx++;
            else if(nums[i]==y)
                cy++;
        }
        if(cx>n/3){
            ans.push_back(x);
        }
        if(cy>n/3){
            ans.push_back(y);
        }
        return ans;
    }
};