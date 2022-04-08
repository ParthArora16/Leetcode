// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n)
{
    int i = 0;
    int j = n;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (isBadVersion(mid) == false)
        {
            i = mid + 1;
        }
        if (isBadVersion(mid) == true)
        {
            if (isBadVersion(mid - 1) == true)
            {
                j = mid - 1;
            }
            else
            {
                return mid;
            }
        }
    }
    return -1;
}
};