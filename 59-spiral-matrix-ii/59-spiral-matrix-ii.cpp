class Solution {
public:
vector<vector<int>> generateMatrix(int n)
{
    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    vector<vector<int>> v(n, vector<int>(n));
    int data = 1;
    while (left <= right)
    {
        for (int j = left; j <= right; j++)
        {
            v[top][j] = data++;
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            v[i][right] = data++;
        }
        right--;
        for (int j = right; j >= left; j--)
        {
            v[bottom][j] = data++;
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            v[i][left] = data++;
        }
        left++;
    }
    return v;
}
};