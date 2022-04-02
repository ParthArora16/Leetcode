class Solution {
public:
    int search(vector<int> &ar, int target)
{
    int n = ar.size();
    int i = 0;
    int j = n - 1;
    int mid = 0;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (ar[mid] == target)
        {
            return mid;
        }
        if (ar[mid] >= ar[i])
        {
            if (target >= ar[i] && target <= ar[mid])
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
            if (target >= ar[mid] && target <= ar[j])
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