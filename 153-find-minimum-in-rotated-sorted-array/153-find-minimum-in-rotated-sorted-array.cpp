class Solution {
public:
    int findMin(vector<int>& ar)
    {
    int ans = INT_MAX;
    int i = 0;
    int j = ar.size() - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (ar[i] <= ar[mid])
        {
            ans = min(ans, ar[i]);
            i = mid + 1;
        }
        else
        {
            ans = min(ans, ar[mid]);
            j = mid - 1;
        }
    }
    return ans;
    }
};