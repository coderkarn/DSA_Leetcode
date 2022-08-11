/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(vector<int> & nums,int l,int r){
        if(l>r)
            return NULL;
        int m=l+(r-l)/2;
        TreeNode* node=new TreeNode(nums[m]);
        node->left=solve(nums,l,m-1);
        node->right=solve(nums,m+1,r);
        
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return NULL;
        TreeNode* node=new TreeNode();
        node=solve(nums,0,n-1);
        return node;
    }
};