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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if(!root) return ans;
    queue<TreeNode*> q;
    q.push(root);
    ans.push_back({root->val});
        while(q.size()){
            int n = q.size();
            vector<int> v;
            for(int i=0; i<n; i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                    v.push_back(curr->left->val);
                }
                if(curr->right){
                    q.push(curr->right);
                    v.push_back(curr->right->val);
                }
            }
            if(v.size()){
                ans.push_back(v);
            }
        }
        for(int i=0; i<ans.size(); i++){
            if(i % 2 == 1){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;
    }
};