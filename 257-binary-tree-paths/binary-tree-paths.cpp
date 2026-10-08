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
    void paths(TreeNode* root,string p,vector<string>& ans){
        if(!root->left && !root->right){
            ans.push_back(p);
            return ;
        }

        if(root->left){
            paths(root->left,p+"->"+to_string(root->left->val),ans);
        }
        if(root->right){
            paths(root->right,p+"->"+to_string(root->right->val),ans);
        }

    }
    vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    string p = to_string(root->val);
        paths(root,p,ans);
        return ans;
    }
};