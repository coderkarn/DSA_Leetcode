class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
vector<int>ans;
    map<int,int>mp;
    for(int i=0;i<arr1.size();i++){
        mp[arr1[i]]++;
    }
    
    for(int i=0;i<arr2.size();i++){
        int num=mp[arr2[i]];
        while(num>=1){
            ans.push_back(arr2[i]);;
            num--;
            mp[arr2[i]]--;
        }
    }
    for(auto i:mp){
        if(i.second>0){
            int num=i.second;
            while(num>=1){
            ans.push_back(i.first);;
            num--;
            i.second--;
        }
    }
    }
    return ans;
    }
};