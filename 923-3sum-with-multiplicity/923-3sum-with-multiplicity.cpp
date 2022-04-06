class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int m=1000000007;
        long ans=0;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            int temp=target-arr[i];
            int j=i+1,k=n-1;
            while(j<k){
                if(arr[k]+arr[j]<temp)
                    j++;
                else if(arr[k]+arr[j]>temp)
                    k--;
                else if(arr[j]!=arr[k]){
                    //equal and terms are different
                    int l=1,r=1;
                    while(j+1<k && arr[j]==arr[j+1]){
                        l++;
                        j++;
                    }
                    while(k-1>j && arr[k]==arr[k-1]){
                        r++;
                        k--;
                    }
                    ans+=l*r;
                    ans%=m;
                    j++;
                    k--;
                }
                else{
                    ans+=(k-j+1)*(k-j)/2;
                    ans%=m;
                    break;
                }
            }
        }
        return (int)ans;
    }
};