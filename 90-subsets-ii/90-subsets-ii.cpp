class Solution {
public:
    void helper(vector<int> &ar, int si, int ei, vector<int> &ans, vector<vector<int>> &v, map<vector<int>, int> &mymap)
{
    if (si > ei)
    {
        if (mymap.count(ans) == 0)
        {
            mymap[ans]++;
            v.push_back(ans);
        }
        return;
    }
    helper(ar, si + 1, ei, ans, v, mymap);
    ans.push_back(ar[si]);
    helper(ar, si + 1, ei, ans, v, mymap);
    ans.pop_back();
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    map<vector<int>, int> mymap;
    vector<int> ans;
    vector<vector<int>> v;
    sort(nums.begin(), nums.end());
    helper(nums, 0, nums.size() - 1, ans, v, mymap);
    return v;
}
};