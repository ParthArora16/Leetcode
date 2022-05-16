class Solution {
public:
    void helper(vector<int> &ar, int si, int ei, vector<int> &output, vector<vector<int>> &v, map<vector<int>, int> &mymap)
{
    if (output.size() == ar.size())
    {
        if (mymap.count(output) == 0)
        {
            v.push_back(output);
            mymap[output]++;
        }
        return;
    }

    for (int i = si; i <= ei; i++)
    {
        if (i == 0 || i == si || ar[i] != ar[i - 1])
        {
            swap(ar[i], ar[si]);
            output.push_back(ar[si]);

            helper(ar, si + 1, ei, output, v , mymap);
            swap(ar[i], ar[si]);
            output.pop_back();
        }
    }
}

vector<vector<int>> permuteUnique(vector<int> &ar)
{
    sort(ar.begin(), ar.end());
    vector<vector<int>> v;
    vector<int> output;
    map<vector<int>, int> mymap;
    helper(ar, 0, ar.size() - 1, output, v, mymap);
    return v;
}
};