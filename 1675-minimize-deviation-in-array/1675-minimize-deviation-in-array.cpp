class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int n=nums.size();
        priority_queue<int> pq;
        int mi=INT_MAX;//for finding minimum element in nums
        
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0)
                nums[i]*=2;
            pq.push(nums[i]);
            
            mi=min(nums[i],mi);
        }
        int ans=INT_MAX;
        while(pq.top()%2==0){
            int ma=pq.top();
            pq.pop();
            ans=min(ans,ma-mi);
            mi=min(mi,ma/2);
            pq.push(ma/2);
        }
        return min(ans,pq.top()-mi);
    }
};