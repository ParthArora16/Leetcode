class Solution {
public:
        int twosumclosest(vector<int> &ar, int si, int ei, int target)
{
    int i = si;
    int j = ei;
    int ans = INT_MAX;
    while (i < j)
    {
        int sum = ar[i] + ar[j];
        if (abs(target - sum) < abs(ans))
        {
            ans = sum - target;
        }
        if (sum < target)
        {
            i++;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            return target;
        }
    }
    return ans + target;
}

int threeSumClosest(vector<int> &ar, int target)
{
    int n = ar.size();
    sort(ar.begin(), ar.end());
    int ans = INT_MAX;
    for (int i = 0; i < n - 2; i++)
    {
        int smallans = twosumclosest(ar, i + 1, n - 1, target - ar[i]);
        int sum = smallans + ar[i];
        if (abs(sum - target) < abs(ans))
        {
            ans = sum - target;
        }
    }
    return ans + target;
}
};