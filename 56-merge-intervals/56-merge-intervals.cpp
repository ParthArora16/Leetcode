class Solution {
public:
vector<vector<int>> merge(vector<vector<int>> &v)
{
    sort(v.begin(), v.end());
    vector<vector<int>> res;
    res.push_back(v[0]);
    int index = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (res[index][1] >= v[i][0])
        {
            res[index][1] = max(res[index][1], v[i][1]);
        }
        else
        {
            index++;
            res.push_back(v[i]);
        }
    }
    return res;
}
};