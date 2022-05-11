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
pair<bool, int> *helpkrnahbc(TreeNode *root)
{
    if (root == NULL)
    {
        pair<bool, int> *p = new pair<bool, int>(true, 0);
        return p;
    }

    pair<bool, int> *leftans = helpkrnahbc(root->left);
    pair<bool, int> *rightans = helpkrnahbc(root->right);

    pair<bool, int> *ans = new pair<bool, int>();

    ans->second = max(leftans->second, rightans->second) + 1;
    ans->first = (leftans->first && rightans->first) && (abs(leftans->second - rightans->second) <= 1);
    return ans;
}

bool isBalanced(TreeNode *root)
{
    return helpkrnahbc(root)->first;
}
};