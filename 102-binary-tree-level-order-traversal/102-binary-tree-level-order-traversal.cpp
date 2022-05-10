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
    vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> v;
    if (root == NULL)
    {
        return v;
    }
    queue<TreeNode *> q1;
    vector<int> ans;
    q1.push(root);
    q1.push(NULL);
    while (!q1.empty())
    {
        TreeNode *front = q1.front();
        q1.pop();
        if (front != NULL)
        {
            ans.push_back(front->val);
            if (front->left != NULL)
            {
                q1.push(front->left);
            }
            if (front->right != NULL)
            {
                q1.push(front->right);
            }
        }
        else
        {
            v.push_back(ans);
            ans.clear();
            if (!q1.empty())
            {
                q1.push(NULL);
            }
        }
    }
    return v;
}
};