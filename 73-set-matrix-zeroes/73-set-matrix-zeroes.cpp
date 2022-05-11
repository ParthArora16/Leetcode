class Solution {
public:
    void setZeroes(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][j] = INT_MAX - 1;
            }
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == INT_MAX - 1)
            {
                matrix[i][j] = 0;
                int x = i;
                int y = j;
                for (int k = 0; k < matrix[x].size(); k++)
                {
                    if (matrix[x][k] != INT_MAX - 1)
                    {
                        matrix[x][k] = 0;
                    }
                }
                for (int k = 0; k < matrix.size(); k++)
                {
                    if (matrix[k][y] != INT_MAX - 1)
                    {
                        matrix[k][y] = 0;
                    }
                }
            }
        }
    }
}
};