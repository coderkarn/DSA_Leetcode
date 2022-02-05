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
    void inorder(TreeNode* r,vector <int> &v){
        if(!r)
            return;
        inorder(r->left,v);
        v.push_back(r->val);
        inorder(r->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector <int>v;
        inorder(root,v);
        int i=0;
        while(k!=1){
            i++;
            k--;
        }
        return v[i];
    }
};