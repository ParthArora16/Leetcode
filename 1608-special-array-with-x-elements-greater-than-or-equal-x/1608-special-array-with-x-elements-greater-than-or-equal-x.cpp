class Solution {
public:
    int getans(vector<int> &ar, int x)
{
    for (int i = 0; i < ar.size(); i++)
    {
        if (ar[i] >= x)
        {
            return ar.size() - i;
        }
    }
    return 0;
}

int specialArray(vector<int> &ar)
{
    sort(ar.begin(), ar.end());
    int n = ar.size();
    int x = 0;
    while (x++ <= n)
    {
        if (getans(ar,x) == x)
        {
            return x;
        }
    }
    return -1;
}
};