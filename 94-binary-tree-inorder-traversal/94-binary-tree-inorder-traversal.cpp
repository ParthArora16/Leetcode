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
    vector<int> inorderTraversal(TreeNode *root)
{
    if (root == NULL)
    {
        vector<int> v;
        return v;
    }
    vector<int> ans1 = inorderTraversal(root->left);
    ans1.push_back(root->val);
    vector<int> ans2 = inorderTraversal(root->right);
    for (int i = 0; i < ans2.size(); i++)
    {
        ans1.push_back(ans2[i]);
    }
    return ans1;
}
};