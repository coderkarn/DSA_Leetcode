class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(people.begin(),people.end());
        int i=0,j=n-1;
        int ans=0;
        while(i<=j){
            if(people[i]+people[j]<=limit)
            {
                i++;
                j--;
                ans++;
            }
            else if(people[j]<=limit){
                j--;
                ans++;
            }
        }
        return ans;
    }
};