class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set <vector <int>> s;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                int new_tar=target-nums[i]-nums[j];
                int x=j+1;
                int y=n-1;
                while(x<y){
                    int sum=nums[x]+nums[y];
                    if(sum>new_tar)
                        y--;
                    else if(sum<new_tar)
                        x++;
                    else{
                        s.insert({nums[i],nums[j],nums[x],nums[y]});
                        x++;
                        y--;
                    }
                }
                
            }
        }
        vector <vector <int>> ans;
        for(auto z:s)
            ans.push_back(z);
        return ans;
    }
};