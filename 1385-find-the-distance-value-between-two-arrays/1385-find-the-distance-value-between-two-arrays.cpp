class Solution {
public:
    int findclosest(vector<int> &ar, int target)
{
    int ans = INT_MAX;
    int n = ar.size();
    for (int i = 0; i < n; i++)
    {
        if (abs(target - ar[i]) < ans)
        {
            ans = abs(target - ar[i]);
        }
    }
    return ans;
}

// this fun() will return final ans
int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
{
    sort(arr2.begin(), arr2.end());
    int n = arr1.size(), m = arr2.size(), count = 0;
    for (int i = 0; i < n; i++)
    {
        int ans = findclosest(arr2, arr1[i]);
        if (ans > d)
        {
            count++;
        }
    }
    return count;
}
};