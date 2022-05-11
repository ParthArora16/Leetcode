class Solution {
public:
    int firstMissingPositive(vector<int> &ar)
{
    int n = ar.size();
    // remove all negative element by n + 1 as it can act as a default value because
    //  my ans set likes b/w 1 ..... n + 1 , and my n + 1 is out of range of array.

    for (int i = 0; i < n; i++)
    {
        if (ar[i] <= 0)
        {
            ar[i] = n + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int mark = abs(ar[i]) - 1;
        if ((mark >= 0 && mark < n) && ar[mark] > 0)
        {
            ar[mark] *= -1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (ar[i - 1] > 0)
        {
            return i;
        }
    }
    return n + 1;
}
};