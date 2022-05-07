class Solution {
public:
    vector<vector<int>> combinationSum(vector<int> &ar, int si, int ei, int target, vector<int> ans, int sum)
{
    if (si > ei)
    {
        vector<vector<int>> v;
        return v;
    }

    if (sum > target)
    {
        vector<vector<int>> v;
        return v;
    }

    if (sum == target)
    {
        vector<vector<int>> v;
        v.push_back(ans);
        return v;
    }

    vector<vector<int>> ans1 = combinationSum(ar, si + 1, ei, target, ans, sum);
    ans.push_back(ar[si]);
    vector<vector<int>> ans2 = combinationSum(ar, si, ei, target, ans, sum + ar[si]);

    vector<vector<int>> fans;
    for (int i = 0; i < ans1.size(); i++)
    {
        fans.push_back(ans1[i]);
    }
    for (int i = 0; i < ans2.size(); i++)
    {
        fans.push_back(ans2[i]);
    }
    ans.pop_back();
    return fans;
}

vector<vector<int>> combinationSum(vector<int> &ar, int target)
{
    int n = ar.size();
    vector<int> ans;
    return combinationSum(ar, 0, n - 1, target, ans, 0);
}
};