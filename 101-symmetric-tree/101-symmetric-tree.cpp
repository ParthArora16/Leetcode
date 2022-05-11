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
   void inorder(TreeNode *root, vector<int> &ar)
{
    if (root == NULL)
    {
        return;
    }
    ar.push_back(-1);
    inorder(root->left, ar);
    ar.push_back(root->val);
    inorder(root->right, ar);
    ar.push_back(1);
}

void reverse_inorder(TreeNode *root, vector<int> &ar)
{
    if (root == NULL)
    {
        return;
    }
    ar.push_back(-1);
    reverse_inorder(root->right, ar);
    ar.push_back(root->val);
    reverse_inorder(root->left, ar);
    ar.push_back(1);
}

bool isSymmetric(TreeNode *root)
{
    vector<int> ar1;
    vector<int> ar2;
    inorder(root->left, ar1);
    reverse_inorder(root->right, ar2);
    if (ar1 == ar2)
    {
        return true;
    }
    return false;
}
};