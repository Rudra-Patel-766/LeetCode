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
    int diameter=0;

    int CalculateMaxLength(TreeNode* root){
        if(root==nullptr){
            return 0;
        }

        int leftHeight = CalculateMaxLength(root->left);
        int rightHeight = CalculateMaxLength(root->right);

        diameter = max(diameter,leftHeight+rightHeight);

        return 1+max(leftHeight,rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        CalculateMaxLength(root);
        return diameter;
    }
};