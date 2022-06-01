class Solution {
public:
    int jump(vector<int> &ar)
{
    int n = ar.size();
    int *output = new int[n];
    output[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        int ans = pow(10, 5);
        for (int j = 1; (i + j) < n && j <= ar[i]; j++)
        {
            
            int smallans = output[i + j] + 1;
            ans = min(smallans, ans);
        }
        output[i] = ans;
    }
    return output[0];
}

};