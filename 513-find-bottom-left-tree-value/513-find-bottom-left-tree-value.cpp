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
    int findBottomLeftValue(TreeNode* root) {
        if(!root)
            return 0;
        queue <TreeNode*>q;
        vector <int> v;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            for(int i=0;i<count;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(i==0)
                    v.push_back(temp->val);
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        int n=v.size();
        return v[n-1];
    }
};