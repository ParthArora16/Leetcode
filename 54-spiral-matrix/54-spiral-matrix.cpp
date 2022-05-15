class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int nCols = matrix[0].size();
    int nRows = matrix.size();

    int n = nCols * nRows;
    int count = 0;

    int colstart = 0, rowstart = 0;

    while (count < n)
    {
        for (int j = colstart; j < nCols && count < n; j++)
        {
            ans.push_back(matrix[rowstart][j]);
            count++;
        }
        rowstart++;
        for (int i = rowstart; i < nRows && count < n; i++)
        {
            ans.push_back(matrix[i][nCols - 1]);
            count++;
        }
        nCols--;
        for (int j = nCols - 1; j >= colstart && count < n; j--)
        {
            ans.push_back(matrix[nRows - 1][j]);
            count++;
        }
        nRows--;
        for (int i = nRows - 1; i >= rowstart && count < n; i--)
        {
            ans.push_back(matrix[i][colstart]);
            count++;
        }
        colstart++;
    }
        return ans;
}
};