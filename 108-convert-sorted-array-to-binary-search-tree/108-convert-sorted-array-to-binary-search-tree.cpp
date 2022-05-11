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
    TreeNode *sortedArrayToBST(vector<int>& ar, int si, int ei)
{
    if (si > ei)
    {
        return NULL;
    }
    int mid = (si + ei) / 2;
    TreeNode *root = new TreeNode(ar[mid]);
    root->left = sortedArrayToBST(ar, si, mid - 1);
    root->right = sortedArrayToBST(ar, mid + 1, ei);
    return root;
}

TreeNode *sortedArrayToBST(vector<int> &ar)
{
    return sortedArrayToBST(ar, 0, ar.size() - 1);
}
};