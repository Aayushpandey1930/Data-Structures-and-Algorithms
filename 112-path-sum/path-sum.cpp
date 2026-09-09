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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr){
            return false;
        }
        queue<pair<TreeNode*, int>> q;
        q.push({root,root -> val});
        while(!q.empty()){
            TreeNode*  node = q.front().first;
            int sum = q.front().second;
            q.pop();
            if (node->left == nullptr && node->right == nullptr) {
                if (sum == targetSum)
                    return true;
            }
            if (node->left != nullptr) {
                q.push({
                    node->left,
                    sum + node->left->val
                });
            }
            if (node->right != nullptr) {
                q.push({
                    node->right,
                    sum + node->right->val
                });
            }
        }
        return false;
    }
};