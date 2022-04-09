class Solution {
public:
   int peakIndexInMountainArray(vector<int> &ar)
{
    int n = ar.size();
    int i = 0, j = n - 1, mid, num;
    while (i <= j)
    {
        mid = i + (j - i) / 2;
        num = ar[mid];
        if (num > ar[mid + 1] && num > ar[mid - 1])
            return mid;
        else if (num < ar[mid + 1])
            i = mid + 1;
        else
            j = mid - 1;
    }
    return -1;
}
};