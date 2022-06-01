class Solution {
public:
    int jump(vector<int> &ar, int si, int ei, int *output)
{
        
    if (si >= ei)
    {
        return 0;
    }

    if (output[si] != -1)
    {
        return output[si];
    }

    int ans = pow(10, 5);

    for (int i = 1; i <= ar[si]; i++)
    {
        int smallans = jump(ar, i + si, ei, output) + 1;
        ans = min(ans, smallans);
    }

    output[si] = ans;
    return output[si];
}

int jump(vector<int> &ar)
{
    int n = ar.size();
    int *output = new int[n];
    for (int i = 0; i < n; i++)
    {
        output[i] = -1;
    }
    // ar[i] -> from ith elements min jumps.
    // final ans -> ar[0];

    return jump(ar, 0, ar.size() - 1, output);
}
};