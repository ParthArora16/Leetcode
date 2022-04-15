class Solution {
public:
    int countNegatives(vector<vector<int>> &grid)
{
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        int low = 0;
        int high = grid[i].size() - 1;
        int maxindex = high;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (grid[i][mid] >= 0)
            {
                low = mid + 1;
            }
            else if (grid[i][mid] < 0)
            {
                if (mid - 1 >= 0 && grid[i][mid - 1] < 0)
                {
                    high = mid - 1;
                }
                else
                {
                    count += maxindex - mid + 1;
                    break;
                }
            }
        }
    }
    return count;
}
};