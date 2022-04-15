class Solution {
public:
   bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        int low = 0;
        int high = matrix[i].size() - 1;
        if (target >= matrix[i][low] && target <= matrix[i][high])
        {
            while (low <= high)
            {
                 int mid = low + (high - low) / 2;
                if (matrix[i][mid] == target)
                {
                    return true;
                }
                else if (matrix[i][mid] < target)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            return false;
        }
    }
    return false;
}
};