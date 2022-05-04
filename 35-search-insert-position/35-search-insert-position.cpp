class Solution {
public:
    int searchInsert(vector<int> &ar, int target)
{
    int i = 0, j = ar.size() - 1;
    int ans = 0;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (ar[mid] == target)
        {
            return mid;
        }
        else if (target > ar[mid])
        {
            ans = mid + 1;
            i = mid + 1;
        }
        else
        {
            ans = mid;
            j = mid - 1;
        }
    }
    return ans;
}
};