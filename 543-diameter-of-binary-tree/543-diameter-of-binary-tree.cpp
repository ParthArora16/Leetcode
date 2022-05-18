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
pair<int, int> *helpkenahbc(TreeNode *root)
{
    if (root == NULL)
    {
        pair<int, int> *p1 = new pair<int, int>(0, 0);
        return p1;
    }

    pair<int, int> *leftans = helpkenahbc(root->left);
    pair<int, int> *rightans = helpkenahbc(root->right);

    pair<int, int> *ans = new pair<int, int>();
    ans->second = max(leftans->second, rightans->second) + 1;
    ans->first = max(leftans->second + rightans->second, max(leftans->first, rightans->first));
    return ans;
}

int diameterOfBinaryTree(TreeNode *root)
{
    return helpkenahbc(root)->first;
}
};