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
    void preorder(TreeNode*r,vector <int> &v){
        if(!r)
            return;
        v.push_back(r->val);
        preorder(r->left,v);
        preorder(r->right,v);
    }
    void flatten(TreeNode* root) {
        vector <int> v;
        preorder(root,v);
        if(!root)
            return;
        TreeNode *cur=root;
        root->left=NULL;
        root->right=NULL;
        for(int i=1;i<v.size();i++){
            cur->right=new TreeNode(v[i]);
            cur=cur->right;
        }
        return;
    }
};