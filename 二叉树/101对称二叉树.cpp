//
// Created by 方 on 2024/2/5.
//

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
    bool dfs(TreeNode* left, TreeNode* right){
        //首先排除空节点的情况
        if(left == nullptr && right != nullptr){
            return false;
        }

        if(left != nullptr && right == nullptr){
            return false;
        }

        if(left == nullptr && right == nullptr){
            return true;
        }

        //排除了空节点，再排除数值不相等的情况
        if(left->val != right->val){
            return false;
        }

        //此时左右节点都不空，且数值相等的情况
        //此时才做递归，做下一层的判断
        bool outside = dfs(left->left, right->right);
        bool inside = dfs(left->right, right->left);
        bool isSame = outside && inside;
        return isSame;


    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr){
            return true;
        }

        return dfs(root->left, root->right);
    }
};
