class Solution {
public:
vector<vector<int>> generateMatrix(int A) {
        int left = 0, right = A - 1, top = 0, bottom = A - 1; 
    vector<vector<int>> mat(A, vector<int>(A));
    int num = 1;
    while(left <= right)
    {
        //top row
        for(int i = left; i <= right; i++)
        {
            mat[top][i] = num; num++;
        }
        top++;
        //right col
        for(int i = top; i <= bottom; i++)
        {
            mat[i][right] = num;
            num++;
        }
        right--;
        //bottom row
        for(int i = right; i >= left; i--)
        {
            mat[bottom][i] = num;
            num++;
        }
        bottom--;
        //left col
        for(int i = bottom; i >= top; i--)
        {
            mat[i][left] = num;
            num++;
        }
        left ++;
    }
    return mat;
    }
};