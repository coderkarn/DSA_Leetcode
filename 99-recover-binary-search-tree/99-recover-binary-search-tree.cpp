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
    TreeNode* prev;
    TreeNode* f;
    TreeNode* m;
    TreeNode* l;
    
    void inorder(TreeNode*r){
        if(!r)
            return;
        inorder(r->left);
        
        if(prev!=NULL && (r->val<prev->val))
        {
            //1st violation as root->val should always be greater than prev->val
            if(f==NULL){
                //for 1st violation f=null
                f=prev;
                m=r;
            }
            //2nd violation case
            else
                l=r;
        }
        prev=r;
        inorder(r->right);
        
    }
    void recoverTree(TreeNode* root) {
        f=m=l=NULL;
        prev=new TreeNode(INT_MIN);
        inorder(root);
        if(f && l)
            swap(f->val,l->val);
        else if(f && m)
            swap(f->val,m->val);
    }
};