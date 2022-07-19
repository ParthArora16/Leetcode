class Solution {
public:
bool isMatch(string s, string p, int m, int n, vector<vector<int>> &output)
{
    if (p.length() == 0)
    {
        return s.length() == 0;
    }

    if (output[m][n] != -1)
    {
        return output[m][n];
    }

    if (p[0] == '*' && p.length() > 1 && p[1] == '*')
    {
        output[m][n] = isMatch(s, p.substr(1), m, n - 1, output);
        return output[m][n];
    }

    if (p[0] == '*')
    {
        if (isMatch(s, p.substr(1), m, n - 1, output))
        {
            output[m][n] = 1;
            return output[m][n];
        }

        else if (s.length() <= 1)
        {
            if (p.length() > 1)
            {
                output[m][n] = 0;
                return output[m][n];
            }
            else
            {
                output[m][n] = 1;
                return true;
            }
        }

        else
        {
            output[m][n] = isMatch(s.substr(1), p, m - 1, n, output);
        }
        return output[m][n];
    }

    if (s.length() >= 1 && ((s[0] == p[0]) || p[0] == '?'))
    {
        output[m][n] = isMatch(s.substr(1), p.substr(1), m - 1, n - 1, output);
        return output[m][n];
    }
    output[m][n] = false;
    return false;
}
bool isMatch(string s, string p)
{
    int m = s.length();
    int n = p.length();
    vector<vector<int>> output(m + 1, vector<int>(n + 1, -1));
    return isMatch(s, p, m, n, output);
}
};