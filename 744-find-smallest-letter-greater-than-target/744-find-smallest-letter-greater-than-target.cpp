class Solution {
public:
   char nextGreatestLetter(vector<char> &ar, char target)
{
    int i = 0, j = ar.size() - 1, mid = 0;
    int ans = 0;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (ar[mid] == target)
        {
            ans = mid + 1;
            i = mid + 1;
        }
        else if (ar[mid] < target)
        {
            i = mid + 1;
        }
        else
        {
            ans = mid;
            j = mid - 1;
        }
    }
    if (ans >= 0 && ans < ar.size())
    {
        return ar[ans];
    }
    return ar[0];
}
};