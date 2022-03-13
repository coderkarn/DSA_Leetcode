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
    
    int lheight(TreeNode* root){
        if(root==NULL)
            return 0;
        return max(lheight(root->right),lheight(root->left))+1;
    }
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        return max(height(root->right),height(root->left))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        if((abs(height(root->right)-height(root->left))<=1)&&isBalanced(root->right)&&isBalanced(root->left))
            return true;
        return false;
    }
};