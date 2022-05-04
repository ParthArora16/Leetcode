class Solution {
public:
    int peakIndexInMountainArray(vector<int> &ar)
{
    int i = 0, j = ar.size() - 1, mid = 0;
    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if ((ar[mid] > ar[mid + 1]) && (ar[mid] > ar[mid -1]))
        {
            return mid;
        }
        else if (ar[mid] < ar[mid + 1])
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return -1;
}
};