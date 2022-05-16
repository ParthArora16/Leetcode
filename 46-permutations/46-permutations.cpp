class Solution {
public:
   void helper(vector<int> &ar, int si, int ei, vector<int>& output, vector<vector<int>>& v)
{
    if (output.size() == ar.size())
    {
        v.push_back(output);
        return;
    }

    for (int i = si; i <= ei; i++)
    {
        swap(ar[i], ar[si]);
        output.push_back(ar[si]);

        helper(ar, si + 1, ei, output, v);
        swap(ar[i], ar[si]);
        output.pop_back();
    }
}

vector<vector<int>> permute(vector<int> &ar)
{
    vector<int> output;
    vector<vector<int>> v;
    helper(ar, 0, ar.size() - 1, output, v);
    return v;
}
};