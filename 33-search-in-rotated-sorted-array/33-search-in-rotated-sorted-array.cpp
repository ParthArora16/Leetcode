class Solution {
public:
    int search(vector<int> &ar, int target)
{
    int i = 0, j = ar.size() - 1, mid;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (ar[mid] == target)
        {
            return mid;
        }
        else if (ar[i] <= ar[mid])
        {
            // left side is sorted
            if ((ar[i] <= target) && (target < ar[mid]))
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        else
        {
            // right part is surely sorted
            if ((ar[mid] < target) && (target <= ar[j]))
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
    }
    return -1;
}
};