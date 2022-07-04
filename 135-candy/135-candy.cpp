class Solution {
public:
    int candy(vector<int>& nums) {
        int n=nums.size();
        vector <int> a(n,0),b(n,0);
        a[0]=1;b[n-1]=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                a[i]=a[i-1]+1;
            }
            else{
                a[i]=1;
            }
        }
        
        for(int i=n-2;i>=0;i--){
            if(nums[i]>nums[i+1]){
                b[i]=b[i+1]+1;
            }
            else{
                b[i]=1;
            }
        }
        
//         for(int i=0;i<n;i++){
//             cout<<a[i]<<" ";
//         }
//         cout<<endl;
//          for(int i=0;i<n;i++){
//             cout<<b[i]<<" ";
//         }
//         cout<<endl;
        
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=max(a[i],b[i]);
        }
        return ans;
    }
};