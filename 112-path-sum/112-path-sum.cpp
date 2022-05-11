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
    bool hasPathSum(TreeNode *root, int target, int sum)
{
        if(root == NULL)
        {
            return false;
        }
            sum += root->val;
    if (root->left == NULL && root->right == NULL)
    {
        return sum == target;
    }
    bool flag = hasPathSum(root->left, target, sum);
    if (flag == true)
    {
        return true;
    }
    flag = hasPathSum(root->right, target, sum);
    return flag;
}

bool hasPathSum(TreeNode *root, int target)
{
    return hasPathSum(root, target, 0);
}
};