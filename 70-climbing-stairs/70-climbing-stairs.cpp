class Solution {
public:
    int climbStairs(int n, int *ar)
{
    if (n < 3)
    {
        return n;
    }
    if (ar[n] != -1)
    {
        return ar[n];
    }
    ar[n] = climbStairs(n - 1, ar) + climbStairs(n - 2, ar);
    return ar[n];
}

int climbStairs(int n)
{
    int *ar = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        ar[i] = -1;
    }
    return climbStairs(n, ar);
}
};