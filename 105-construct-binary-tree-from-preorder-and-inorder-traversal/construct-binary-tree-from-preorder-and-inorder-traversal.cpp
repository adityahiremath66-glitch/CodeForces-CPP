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
    int search(vector<int>& in,int val,int l,int r){
        for(int i=l; i<=r; i++){
            if(in[i] == val){
                return i;
            }
        }
        return -1;
    }
    TreeNode* helper(vector<int>& pre, vector<int>& in,int &idx,int l,int r){
        if(l > r) return NULL;

        TreeNode* root = new TreeNode(pre[idx]);

        int in_idx = search(in,pre[idx],l,r);
        idx++;

        root->left = helper(pre,in,idx,l,in_idx-1);
        root->right = helper(pre,in,idx,in_idx+1,r);

        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
    int n = in.size();
    int idx = 0;
    TreeNode* ans = helper(pre,in,idx,0,n-1);
        return ans;
    }
};