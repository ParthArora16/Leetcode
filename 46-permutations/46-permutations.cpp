class Solution {
public:
    void helper(vector<int> &ar, vector<int> &output, vector<vector<int>> &v, vector<int> &visited)
{
    if (output.size() == ar.size())
    {
        v.push_back(output);
        return;
    }

    for (int i = 0; i < ar.size(); i++)
    {
        if (visited[i] == -1)
        {
            visited[i] = 1;
            output.push_back(ar[i]);
            helper(ar , output , v , visited);
            visited[i] = -1;
            output.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<int> visited(10, -1);
    vector<int> output;
    vector<vector<int>> v;
    helper(nums, output, v, visited);
    return v;
}
};