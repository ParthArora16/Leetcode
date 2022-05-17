class Solution {
public:
    int uniquePaths(int m, int n, int i, int j, int **ar)
{
    if (i == m - 1 && j == n - 1)
    {
        return 1;
    }

    if (i >= m || j >= n)
    {
        return 0;
    }

    if (ar[i][j] != -1)
    {
        return ar[i][j];
    }

    ar[i][j] = uniquePaths(m, n, i + 1, j, ar) + uniquePaths(m, n, i, j + 1, ar);
    return ar[i][j];
}

int uniquePaths(int m, int n)
{
    int **ar = new int *[m];
    for (int i = 0; i < m; i++)
    {
        ar[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            ar[i][j] = -1;
        }
    }
    return uniquePaths(m, n, 0, 0, ar);
}
};