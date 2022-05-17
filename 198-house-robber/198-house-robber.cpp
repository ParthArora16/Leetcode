class Solution {
public:
int rob(vector<int> &ar)
{
    int n = ar.size();
    if (n == 0)
    {
        return 0;
    }
    int *output = new int[n + 1];
    output[0] = 0;
    output[1] = ar[n - 1];
    for (int i = 2; i <= n; i++)
    {
        int op1 = output[i - 2] + ar[n - i];
        int op2 = output[i - 1];
        output[i] = max(op1, op2);
    }
    return output[n];
}
};