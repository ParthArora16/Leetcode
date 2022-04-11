class Solution {
public:
    char nextGreatestLetter(vector<char> &s, char target)
{
    int n = s.size(), i = 0, j = n - 1;
    char poss = s[0];
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (s[mid] == target)
        {
            if (mid + 1 <= n - 1)
            {
                i = mid + 1;
            }
            else
            {
                return s[0];
            }
        }
        else if (target > s[mid])
        {
            i = mid + 1;
        }
        else
        {
            poss = s[mid];
            j = mid - 1;
        }
    }
    return poss;
}
};