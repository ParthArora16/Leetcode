class Solution {
public:
    bool judgeSquareSum(int n)
{
    if (n < 3)
    {
        return true;
    }
    long long i = 0;
    long long j = sqrt(n);
    while (i <= j)
    {
        long long ans = i * i + j * j;
        if (ans == n)
        {
            return true;
        }
        else if (ans > n)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}

};