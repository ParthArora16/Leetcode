class Solution {
public:
    // this fun() will return closest distance of target from sorted array ar
int findclosest(vector<int> &ar, int target)
{
    int n = ar.size(), i = 0, j = n - 1;
    int pos = INT_MAX;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (ar[mid] == target)
        {
            return 0;
        }
        else if (target < ar[mid])
        {
            pos = min(abs(target - ar[mid]), pos);
            j = mid - 1;
        }
        else
        {
            pos = min(abs(target - ar[mid]), pos);
            i = mid + 1;
        }
    }
    return pos;
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