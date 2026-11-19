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
    void find_min(TreeNode* root,long long& mn1,long long& mn2){
        if(!root) return ;
        if(root->val < mn1){
            mn2 = mn1;
            mn1 = root->val;
        }else if(root->val > mn1 && root->val < mn2){
            mn2 = root->val;
        }
        find_min(root->left,mn1,mn2);
        find_min(root->right,mn1,mn2);

    }
    int findSecondMinimumValue(TreeNode* root) {
    long long m1 = LLONG_MAX;
    long long m2 = LLONG_MAX;
        find_min(root,m1,m2);
        return m1 == m2 ? -1 : m2;
    }

};