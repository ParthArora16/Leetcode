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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    vector<vector<int>> v;
    vector<int> ans;
    if (root == NULL)
    {
        return v;
    }
    stack<TreeNode *> s1;
    stack<TreeNode *> s2;

    s1.push(root);
    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            TreeNode *top1 = s1.top();
            s1.pop();
            ans.push_back(top1->val);
            if (top1->left != NULL)
            {
                s2.push(top1->left);
            }
            if (top1->right != NULL)
            {
                s2.push(top1->right);
            }
        }
        v.push_back(ans);
        ans.clear();
        while (!s2.empty())
        {
            TreeNode *top2 = s2.top();
            s2.pop();
            ans.push_back(top2->val);
            if (top2->right != NULL)
            {
                s1.push(top2->right);
            }
            if (top2->left != NULL)
            {
                s1.push(top2->left);
            }
        }
        if(ans.size() != 0)
        {
            v.push_back(ans);
        }
        ans.clear();
    }
    return v;
}
};