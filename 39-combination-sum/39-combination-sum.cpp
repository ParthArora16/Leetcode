class Solution {
public:
    void helper(vector<int> &candidates, int si, int ei, int target, int sum, vector<int> &ans, vector<vector<int>> &v)
{
    if (si > ei)
    {
        return;
    }
    if (sum == target)
    {
        v.push_back(ans);
        return;
    }
    if (sum > target)
    {
        return;
    }

    helper(candidates, si + 1, ei, target, sum, ans, v);
    ans.push_back(candidates[si]);
    helper(candidates, si, ei, target, sum + candidates[si], ans, v);
    ans.pop_back();
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> v;
    int sum = 0;
    vector<int> ans;
    helper(candidates, 0, candidates.size() - 1, target, sum, ans, v);
    return v;
}
};