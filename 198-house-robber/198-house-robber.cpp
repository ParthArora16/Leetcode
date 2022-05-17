class Solution {
public:
    int rob(vector<int> &ar, int si, int ei, int *output, int n)
{
    if (si > ei)
    {
        return 0;
    }

    if (output[n] != -1)
    {
        return output[n];
    }

    output[n] = max(rob(ar, si + 2, ei , output , n - 2) + ar[si], rob(ar, si + 1, ei , output , n - 1));
    return output[n];
}

int rob(vector<int> &ar)
{
    int n = ar.size();
    int *output = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        output[i] = -1;
    }
    return rob(ar, 0, ar.size() - 1, output, n);
}
};