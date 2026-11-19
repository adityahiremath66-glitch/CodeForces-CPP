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
    TreeNode* ans = NULL;
    TreeNode* searchBST(TreeNode* root, int x) {
        if(root == NULL) return NULL;
        if(root->val == x){
            return root;
        }
        if(x < root->val){
            ans = searchBST(root->left,x);
        }else{
            ans = searchBST(root->right,x);
        }
        return ans;
    }
};