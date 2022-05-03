class Solution {
public:
    string longestCommonPrefix(vector<string> &input)
{
    string ans = "";
    for (int j = 0; j < input[0].size(); j++)
    {
        int save = input[0][j];
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i][j] != save)
            {
                return ans;
            }
        }
        ans += save;
    }
    return ans;
}
};