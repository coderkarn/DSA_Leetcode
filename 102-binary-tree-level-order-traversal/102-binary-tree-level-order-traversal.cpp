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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        queue <TreeNode*> q;
        q.push(root);
        vector <vector <int> > ans;
        
        while(!q.empty()){
            int n=q.size();
            vector <int> res;
            for(int i=0;i<n;i++)
            {
                TreeNode* t=q.front();
                res.push_back(t->val);
                q.pop();
                if(t->left)
                   q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            ans.push_back(res);
        }
        return ans;
    }
};