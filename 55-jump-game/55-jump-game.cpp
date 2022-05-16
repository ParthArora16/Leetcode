class Solution {
public:
    bool helper(vector<int> &ar, int si, int ei, int *output, int n)
{
    if (si == ei)
    {
        return true;
    }

    if (output[n] != -1)
    {
        return output[n];
    }

    for (int i = 1; i <= ar[si]; i++)
    {
        bool ans = helper(ar, si + i, ei , output , n - i);
        if (ans == true)
        {
            output[n] = true;
            return output[n];
        }
    }
    output[n] = false;
    return output[n];
}

bool canJump(vector<int> &ar)
{
    int *output = new int[ar.size() + 1];
    for (int i = 0; i <= ar.size(); i++)
    {
        output[i] = -1;
    }
    int n = ar.size();
    bool ans = helper(ar, 0, ar.size() - 1, output, n);
    delete[] output;
    return ans;
}
};