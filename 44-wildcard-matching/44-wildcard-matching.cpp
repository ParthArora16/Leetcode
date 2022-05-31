class Solution {
public:
    bool isMatch(string s, string p)
{
    int m = s.length();
    int n = p.length();
    int **ar = new int *[m + 1];
    for (int i = 0; i <= m; i++)
    {
        ar[i] = new int[n + 1];
    }

    // i - s - m
    // j - p - n

    ar[0][0] = 1;

    for (int i = 1; i <= m; i++)
    {
        ar[i][0] = 0;
    }

    for (int i = 0; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (p[n - j] == '*')
            {
                if (j > 1 && p[n - j + 1] == '*')
                {
                    ar[i][j] = ar[i][j - 1];
                }
                else if (j == 1)
                {
                    ar[i][j] = 1;
                }
                else if (ar[i][j - 1])
                {
                    ar[i][j] = 1;
                }
                else if (i > 1)
                {
                    ar[i][j] = ar[i - 1][j];
                }
                else
                {
                    ar[i][j] = 0;
                }
            }
            else if (i >= 1 && (s[m - i] == p[n - j] || p[n - j] == '?'))
            {
                ar[i][j] = ar[i - 1][j - 1];
            }
            else
            {
                ar[i][j] = 0;
            }
        }
    }

    return ar[m][n];
}
};