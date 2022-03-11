class Solution {
public:
static bool comp(vector<int>& v1,vector<int>& v2)
{
if(v1[0]!=v2[0])
return v1[0]<v2[0];
return v1[1]<v2[1];
}
bool checkStraightLine(vector<vector<int>>& coordinates) {
sort(coordinates.begin(),coordinates.size(),comp);
int m=coordinates.size()-1;
for(int i=m;i>0;i--){
if(coordinates[i][1]-coordinates[i-1][1]!=coordinates[i][0]-coordinates[i-1][0])
return false;
}
return true;
}
};