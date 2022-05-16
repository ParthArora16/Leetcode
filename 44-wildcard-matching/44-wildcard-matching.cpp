class Solution {
public:
    bool isMatch(string s, int n, string p, int m, int **ar)
{
    if (p.length() == 0)
    {
        return s.length() == 0;
    }

    // check
    if (ar[n][m] != -1)
    {
        return ar[n][m];
    }

    if (p[0] == '*' && p.length() > 1 && p[1] == '*')
    {
        ar[n][m] = isMatch(s, n, p.substr(1), m - 1, ar);
        return ar[n][m];
    }

    if (p[0] == '*' && p.length() > 1 && s.length() == 0)
    {
        return false;
    }

    if (p[0] == '*')
    {
        if (p.length() == 1)
        {
            return true;
        }
        if (isMatch(s, n, p.substr(1), m - 1, ar))
        {
            ar[n][m] = true;
            return ar[n][m];
        }
        ar[n][m] = isMatch(s.substr(1), n - 1, p, m, ar);
        return ar[n][m];
    }

    if ((s.length() >= 1) && (p[0] == s[0] || p[0] == '?'))
    {
        ar[n][m] = isMatch(s.substr(1), n - 1, p.substr(1), m - 1, ar);
        return ar[n][m];
    }

    return false;
}

bool isMatch(string s, string p)
{
    int n = s.length() + 1;
    int m = p.length() + 1;
    int **ar = new int *[n];
    for (int i = 0; i < n; i++)
    {
        ar[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            ar[i][j] = -1;
        }
    }
    return isMatch(s, n - 1, p, m - 1, ar);
}
};