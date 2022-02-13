class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map <int,int> m;
        for(auto i: arr1)
            m[i]++;
        vector <int> ans;
        for(int i=0;i<arr2.size();i++){
            int fre=m[arr2[i]];
            while(fre--){
                ans.push_back(arr2[i]);
                m[arr2[i]]--;
            }
        }
    for(auto i:m){
        if(i.second>0)
        {
            int num=i.second;
            while(num>=1){
                ans.push_back(i.first);
                num--;
                i.second--;
                }
            }
        }
        return ans;
    }
};