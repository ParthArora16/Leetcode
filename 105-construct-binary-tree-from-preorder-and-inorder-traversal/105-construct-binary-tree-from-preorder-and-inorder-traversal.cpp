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
    TreeNode *helper(vector<int> &preorder, int psi, int pei, vector<int> &inorder, int isi, int iei)
{
    if (isi > iei)
    {
        return NULL;
    }
    TreeNode *root = new TreeNode(preorder[psi]);
    int lpsi;
    int lpei;
    int lisi;
    int liei;
    int rpsi;
    int rpei;
    int risi;
    int riei;

    lpsi = psi + 1;
    rpei = pei;
    lisi = isi;
    riei = iei;

    int count = 0;
    for (int i = isi; i <= iei; i++)
    {
        if (inorder[i] == root->val)
        {
            count = i;
            break;
        }
    }

    liei = count - 1;
    risi = count + 1;

    lpei = liei - lisi + lpsi;
    rpsi = lpei + 1;

    root->left = helper(preorder, lpsi, lpei, inorder, lisi, liei);
    root->right = helper(preorder, rpsi, rpei, inorder, risi, riei);
    return root;
}
    
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    return helper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
}
};