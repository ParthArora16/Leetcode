class Solution {
public:
    void findCombinations(vector<int> &candidates, int index, int target, int sum, vector<int>& ans, vector<vector<int>>& v)
{
    if (sum == target)
    {
        v.push_back(ans);
        return;
    }

    if (sum > target)
    {
        return;
    }

    for (int i = index; i < candidates.size(); i++)
    {
        if (i == index || candidates[i] != candidates[i - 1])
        {
            ans.push_back(candidates[i]);
            findCombinations(candidates, i + 1, target, sum + candidates[i], ans, v);
            ans.pop_back();
        }
    }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<vector<int>> v;
    sort(candidates.begin(), candidates.end());
    vector<int> ans;
    findCombinations(candidates, 0, target, 0, ans, v);
    return v;
}
};