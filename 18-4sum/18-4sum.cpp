class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set <vector <int>> s;
        vector <vector <int>> ans;
        for(int i=0;i<n-2;i++){
            if(i == 0 || nums[i] != nums[i-1])
            for(int j=i+1;j<n-1;j++){
                long long int new_tar=(long long)target-nums[i]-nums[j];
                int x=j+1;
                int y=n-1;
                if(j == i + 1 || nums[j] != nums[j-1])
                while(x<y){
                    long long int sum=(long long)nums[x]+nums[y];
                    if(sum>new_tar)
                        y--;
                    else if(sum<new_tar)
                        x++;
                    else{
                        //s.insert({nums[i],nums[j],nums[x],nums[y]});
                        ans.push_back({nums[i],nums[j],nums[x],nums[y]});
                        y--;
                        x++;
                        while(x < y && nums[x] == nums[x-1])
                            x++;
                        
                    }
                }
                
            }
        }
        
        // for(auto z:s)
        //     ans.push_back(z);
        return ans;
    }
};