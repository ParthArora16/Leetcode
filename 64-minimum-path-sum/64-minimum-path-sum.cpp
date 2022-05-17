class Solution {
public:
   int minPathSum(vector<vector<int>> &grid, int m, int n, int i, int j, int **ar)
{
    if (i == m - 1 && j == n - 1)
    {
        return grid[i][j];
    }

    if (i >= m || j >= n)
    {
        return INT_MAX;
    }

    // check

    if (ar[i][j] != -1)
    {
        return ar[i][j];
    }

    ar[i][j] = min(minPathSum(grid, m, n, i, j + 1, ar), minPathSum(grid, m, n, i + 1, j, ar)) + grid[i][j];
    return ar[i][j];
}

int minPathSum(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    int **ar = new int*[m];
    for (int i = 0; i < m; i++)
    {
        ar[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            ar[i][j] = -1;
        }
        // ar[i][j] --> minPathSum from index i,j;
    }
    return minPathSum(grid, m, n, 0, 0, ar);
}
};