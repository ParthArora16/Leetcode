class Solution {
public:
    int tribonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (n == 2)
    {
        return 1;
    }
    int *ar = new int[n + 1];
    ar[0] = 0;
    ar[1] = 1;
    ar[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        ar[i] = ar[i - 1] + ar[i - 2] + ar[i - 3];
    }
    return ar[n];
}
};