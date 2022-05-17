class Solution {
public:
int uniquePathsWithObstacles(vector<vector<int>> &ar, int m, int n, int i, int j, int **output)
{
    if (i == m - 1 && j == n - 1)
    {
        return 1;
    }

    if (i >= m || j >= n)
    {
        return 0;
    }

    if (ar[i][j] == 1)
    {
        return 0;
    }

    // check

    if (output[i][j] != -1)
    {
        return output[i][j];
    }

    output[i][j] = uniquePathsWithObstacles(ar, m, n, i + 1, j, output) + uniquePathsWithObstacles(ar, m, n, i, j + 1, output);
    return output[i][j];
}

int uniquePathsWithObstacles(vector<vector<int>> &ar)
{
    int m = ar.size();
    int n = ar[0].size();
    if (ar[m - 1][n - 1] == 1)
    {
        return 0;
    }
    int **output = new int *[m];
    for (int i = 0; i < m; i++)
    {
        output[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            output[i][j] = -1;
        }
    }
    return uniquePathsWithObstacles(ar, m, n, 0, 0, output);
}
};