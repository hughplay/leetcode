/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
 */

// @lc code=start
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> root_nodes;
        while (true) {
            if (root != NULL) {
                res.push_back(root->val);
                if (root->left != NULL) {
                    root_nodes.push(root);
                    root = root->left;
                } else if (root->right != NULL) {
                    root = root->right;
                } else {
                    root = NULL;
                }
            } else {
                    if (root_nodes.empty()) {
                        break;
                    }
                    root = root_nodes.top()->right;
                    root_nodes.pop();
            }
        }
        return res;
    }
};
// @lc code=end

