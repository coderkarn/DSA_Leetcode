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
    int s=0;
public:
    TreeNode* convertBST(TreeNode* root) {
        if(root!=NULL){
            convertBST(root->right);
            s+=root->val;
            root->val=s;
            convertBST(root->left);
        }
        return root;
    }
};