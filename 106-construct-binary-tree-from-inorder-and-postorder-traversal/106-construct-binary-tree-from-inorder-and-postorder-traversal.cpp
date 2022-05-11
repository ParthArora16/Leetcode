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
    TreeNode *buildTreehelpkarnahbc(vector<int> &pro, vector<int> &in, int inS, int inE, int proS, int proE)
{
    if (inS > inE)
    {
        return NULL;
    }
    int rootdata = pro[proE];
    int LinS = inS;
    int c = -1;
    for (int i = inS; i <= inE; i++)
    {
        if (in[i] == rootdata)
        {
            c = i;
        }
    }
    int LinE = c - 1;
    int LproS = proS;
    int LproE = LinE - LinS + LproS;
    int RinS = c + 1;
    int RinE = inE;
    int RproS = LproE + 1;
    int RproE = proE - 1;

    TreeNode *root = new TreeNode(rootdata);
    root->left = buildTreehelpkarnahbc(pro, in, LinS, LinE, LproS, LproE);
    root->right = buildTreehelpkarnahbc(pro, in, RinS, RinE, RproS, RproE);
    return root;
}

TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    return buildTreehelpkarnahbc(postorder, inorder, 0, inorder.size() - 1, 0, postorder.size() - 1);
}
};