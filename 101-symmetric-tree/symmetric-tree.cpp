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
    bool isSymmetric(TreeNode* root) {
    queue<pair<TreeNode*,TreeNode*>> q;
    q.push({root->left,root->right});
        while(q.size()){
            TreeNode* l = q.front().first;
            TreeNode* r = q.front().second;
            q.pop();
            if(!l && !r) continue;
            if(!l || !r) return 0;
            if(l->val != r->val) return 0;

            q.push({l->left,r->right});
            q.push({l->right,r->left});
            
        }
        return 1;
    }
};