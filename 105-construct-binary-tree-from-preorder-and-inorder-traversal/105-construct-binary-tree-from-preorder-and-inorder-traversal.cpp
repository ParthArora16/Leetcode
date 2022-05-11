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
    TreeNode *buildTree(vector<int> &preorder, int preS, int preE, vector<int> &inorder, int inS, int inE)
{
    if (inS > inE)
    {
        return NULL;
    }
    int rootdata;
    rootdata = preorder[preS];
    TreeNode *root = new TreeNode(rootdata);
    int LinS;
    int LinE;
    int LpreS;
    int LpreE;
    int RinS;
    int RinE;
    int RpreS;
    int RpreE;

    LinS = inS;
    int index = -1;
    for (int i = inS; i <= inE; i++)
    {
        if (inorder[i] == rootdata)
        {
            index = i;
            break;
        }
    }
    LinE = index - 1;
    RinS = index + 1;
    RinE = inE;

    LpreS = preS + 1;
    LpreE = LinE - LinS + LpreS;

    RpreS = LpreE + 1;
    RpreE = preE;

    root->left = buildTree(preorder, LpreS, LpreE, inorder, LinS, LinE);
    root->right = buildTree(preorder, RpreS, RpreE, inorder, RinS, RinE);

    return root;
}

TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    return buildTree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
}
};