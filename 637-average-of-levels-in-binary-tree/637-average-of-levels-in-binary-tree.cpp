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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        v.push_back(root->val);
        queue<TreeNode*> parent;
        parent.push(root);
        double summ = 0.0;
        int count = 0, cc=0;
        while(!parent.empty()){
            TreeNode* node = parent.front();
            parent.pop();
            if(node==NULL){
                continue;
            }
            if(node->left != NULL){
                summ += node->left->val;
                count++;
                cc++;
                parent.push(node->left);
            }
            if(node->right != NULL){
                summ += node->right->val;
                count++;
                cc++;
                parent.push(node->right);
            }
            if(parent.size()==cc && count>0){
                v.push_back(summ/count);
                summ = 0.0;
                count = 0;
                cc = 0;
            }
        }
        return v;
    }
};