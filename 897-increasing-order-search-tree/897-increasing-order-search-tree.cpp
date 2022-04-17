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
    void inorder(TreeNode* r,vector <int> & v){
        if(!r)
            return ;
        inorder(r->left,v);
        v.push_back(r->val);
        inorder(r->right,v);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector <int> v;
        inorder(root,v);
        TreeNode * node= new TreeNode (v[0]);
        TreeNode * ans=node;
        for (int i=1;i<v.size();i++){
            node->right= new TreeNode(v[i]);
            node=node->right;
        }
        return ans; 
    }
};