class Solution {
public:
    int uniquePaths(int m, int n)
{
    int **ar = new int *[m];
    for (int i = 0; i < m; i++)
    {
        ar[i] = new int[n];
    }
    ar[m- 1][n - 1] = 1;
    for (int j = 0; j < n - 1; j++)
    {
        ar[m - 1][j] = 1;
    }
    for (int i = 0; i < m - 1; i++)
    {
        ar[i][n - 1] = 1;
    }
    for (int i = m - 2; i >= 0; i--)
    {
        for (int j = n - 2; j >= 0; j--)
        {
            ar[i][j] = ar[i + 1][j] + ar[i][j + 1];
        }
    }
    return ar[0][0];
}
};