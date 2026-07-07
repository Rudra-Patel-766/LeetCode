/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int Traversal(TreeNode* root) {
        if (root != nullptr) {
            queue<TreeNode*> q;
            q.push(root);
            int depth = 0;

            while (!q.empty()) {
                int n = q.size();

                for (int i = 0; i < n; i++) {
                    TreeNode* node = q.front();
                    q.pop();

                    if (node->left != nullptr) {
                        q.push(node->left);
                    }

                    if (node->right != nullptr) {
                        q.push(node->right);
                    }
                }

                depth++;
            }

            return depth;
        }

        return 0;
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        int d1 = Traversal(root->left);
        int d2 = Traversal(root->right);

        int ans = abs(d1 - d2);

        if (ans <= 1 && isBalanced(root->left) && isBalanced(root->right)) {
            return true;
        }

        return false;
    }
};