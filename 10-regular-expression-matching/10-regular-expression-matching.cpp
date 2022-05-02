class Solution {
public:
    bool isMatch(string s, string p, int m, int n, bool **ar)
{
    if (p.size() == 0)
    {
        return s.size() == 0;
    }

    if (ar[m][n] != false)
    {
        return ar[m][n];
    }

    if (p.size() > 1 && p[1] == '*')
    {
        // case 1
        if (isMatch(s, p.substr(2), m, n - 2, ar))
        {
            ar[m][n] = true;
            return ar[m][n];
        }
        if (s.length() > 0 && (s[0] == p[0] || p[0] == '.'))
        {
            ar[m][n] = isMatch(s.substr(1), p, m - 1, n, ar);
            return ar[m][n];
        }
        ar[m][n] = false;
        return ar[m][n];
    }

    else
    {
        if ((s[0] == p[0] || p[0] == '.') && s.size() > 0)
        {
            ar[m][n] = isMatch(s.substr(1), p.substr(1), m - 1, n - 1, ar);
            return ar[m][n];
        }
        ar[m][n] = false;
        return ar[m][n];
    }
    return ar[m][n];
}

bool isMatch(string s, string p)
{
    int m = s.length() + 1;
    int n = p.length() + 1;

    bool **ar = new bool *[m];

    for (int i = 0; i < m; i++)
    {
        ar[i] = new bool[n];
        for (int j = 0; j < n; j++)
        {
            ar[i][j] = false;
        }
    }

    bool ans = isMatch(s, p, m - 1, n - 1, ar);

    for (int i = 0; i < m; i++)
    {
        delete[] ar[i];
    }

    delete[] ar;

    return ans;
}
};