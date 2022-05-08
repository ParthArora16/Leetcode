class Solution {
public:
    int minDistance(string s, string v)
{
    int m = s.length() + 1;
    int n = v.length() + 1;
    int **ar = new int *[m];
    for (int i = 0; i < m; i++)
    {
        ar[i] = new int[n];
    }

    ar[0][0] = 0;

    for (int i = 1; i < m; i++)
    {
        ar[i][0] = i;
    }

    for (int j = 1; j < n; j++)
    {
        ar[0][j] = j;
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (s[m - 1 - i] == v[n - 1 - j])
            {
                ar[i][j] = ar[i - 1][j - 1];
            }
            else
            {
                int op1 = ar[i - 1][j] + 1;
                int op2 = ar[i][j - 1] + 1;
                int op3 = ar[i - 1][j - 1] + 1;
                ar[i][j] = min(op1, min(op2, op3));
            }
        }
    }
    return ar[m - 1][n - 1];
}
};