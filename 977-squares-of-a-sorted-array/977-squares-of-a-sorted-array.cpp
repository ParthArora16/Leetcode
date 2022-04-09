class Solution {
public:
    vector<int> sortedSquares(vector<int> &ar)
{
    int n = ar.size();
    vector<int> ans;
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (abs(ar[i]) > abs(ar[j]))
        {
            ans.push_back(ar[i] * ar[i]);
            i++;
        }
        else
        {
            ans.push_back(ar[j] * ar[j]);
            j--;
        }
    }
    i = 0;
    j = n - 1;
    while (i < j)
    {
        swap(ans[i], ans[j]);
        i++;
        j--;
    }
    return ans;
}
};