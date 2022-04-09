class Solution {
public:
    vector<int> sortedSquares(vector<int> &ar)
{
    int n = ar.size();
    vector<int> ans;
    ans.resize(n, 0);
    int i = 0, j = n - 1, ei = n - 1;
    while (i <= j)
    {
        if (abs(ar[i]) > abs(ar[j]))
        {
            // ans.push_back(ar[i] * ar[i]);
            ans[ei] = ar[i] * ar[i];
            ei--;
            i++;
        }
        else
        {
            // ans.push_back(ar[j] * ar[j]);
            ans[ei] = ar[j] * ar[j];
            ei--;
            j--;
        }
    }
    return ans;
}
};