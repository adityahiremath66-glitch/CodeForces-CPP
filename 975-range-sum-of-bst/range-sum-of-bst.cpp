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
    int helper(TreeNode* r,int st, int end){
        if(!r) return 0;
        int curr_sum = (st <= r->val && r->val <= end) ? r->val : 0;
        int lft_sum = helper(r->left,st,end);
        int rt_sum = helper(r->right,st,end);

        return curr_sum+lft_sum+rt_sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return helper(root,low,high);
    }
};