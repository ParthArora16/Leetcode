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
    void preorderTraversal(TreeNode *root, vector<int> &ar)
{
    if (root == NULL)
    {
        return;
    }
    ar.push_back(root->val);
    preorderTraversal(root->left, ar);
    preorderTraversal(root->right, ar);
}

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> ans;
    preorderTraversal(root, ans);
    return ans;
}
};