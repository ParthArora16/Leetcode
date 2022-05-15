class Solution {
public:
    void findCombinations(vector<int> &candidates, int si, int ei, int target, int sum, vector<int> &ans, vector<vector<int>> &v)
{
    if (sum == target)
    {
        v.push_back(ans);
        return;
    }
    if (si > ei)
    {
        return;
    }
    if (sum > target)
    {
        return;
    }
    for (int i = si + 1; i <= ei; i++)
    {
        if (candidates[i] != candidates[i - 1])
        {
            findCombinations(candidates, i, ei, target, sum, ans, v);
            break;
        }
    }
    ans.push_back(candidates[si]);
    findCombinations(candidates, si + 1, ei, target, sum + candidates[si], ans, v);
    ans.pop_back();
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<vector<int>> v;
    sort(candidates.begin(), candidates.end());
    vector<int> ans;
    findCombinations(candidates, 0, candidates.size() - 1, target, 0, ans, v);
    return v;
}
};