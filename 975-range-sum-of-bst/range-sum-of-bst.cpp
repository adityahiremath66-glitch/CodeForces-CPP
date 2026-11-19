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
    int ans = 0;
    int helper(TreeNode* r,int st, int end){
        if(!r) return 0;
        if(st <= r->val && r->val <= end){
            ans+=r->val;
        }
        helper(r->left,st,end);
        helper(r->right,st,end);

        return ans;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return helper(root,low,high);
    }
};