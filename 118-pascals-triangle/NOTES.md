vector <vector <int>> ans;
ans.push_back({1});
int n,i,j;
n= numRows;
for(i=1;i<n;i++){
vector <int> v;
v.push_back(1);
for(j=1;j<i-1;j++){
v.push_back(ans[i-1][j]+ans[i-1][j-1]);
}
v.push_back(1);
ans.push_back(v);
}
return ans;