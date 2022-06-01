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
    if (root == NULL)
    {
        return {};
    }

    queue<TreeNode *> q1;
    q1.push(root);
    q1.push(NULL);

    vector<vector<int>> ans;

    vector<int> res;

    while (!q1.empty())
    {
        TreeNode *front = q1.front();
        q1.pop();
        if (front != NULL)
        {
            int data = front->val;
            res.push_back(data);
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
            if (!q1.empty())
            {
                q1.push(NULL);
            }
            ans.push_back(res);
            res.clear();
        }
    }
    return ans;
}
};