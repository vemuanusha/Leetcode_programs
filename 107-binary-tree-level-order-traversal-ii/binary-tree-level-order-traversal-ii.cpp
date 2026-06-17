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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>v;
        if(!root) return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int levelNodes = q.size();
            vector<int>lvl;
            for(int i=1;i<=levelNodes;i++){
                TreeNode*curr=q.front();
                q.pop();
                lvl.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            v.push_back(lvl);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};