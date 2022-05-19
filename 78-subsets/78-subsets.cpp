class Solution {
public:
   void helper(vector<int> &ar, int si, int ei, vector<int> &ans, vector<vector<int>> &v)
{
    if (si > ei)
    {
        v.push_back(ans);
        return;
    }
    helper(ar, si + 1, ei, ans, v);
    ans.push_back(ar[si]);
    helper(ar, si + 1, ei, ans, v);
    ans.pop_back();
}

vector<vector<int>> subsets(vector<int> &ar)
{
    vector<int> ans;
    vector<vector<int>> v;
    helper(ar, 0, ar.size() - 1, ans, v);
    return v;
}
};