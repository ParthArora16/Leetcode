class Solution {
public:
    int firstMissingPositive(vector<int> &ar)
{
    sort(ar.begin(), ar.end());
    unique(ar.begin(), ar.end());

    int k = 1;
    for (int i = 0; i < ar.size(); i++)
    {
        if (ar[i] > 0)
        {
            if (ar[i] == k)
            {
                k++;
            }
            else
            {
                return k;
            }
        }
    }
    return k;
}
};