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
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        if (map[ar[i]] == 0)
        {
            map[ar[i]] = n - i;
        }
    }
    int x = 1;
    while (x <= n)
    {
        if (map.count(x) == 1)
        {
            if (map[x] == x)
            {
                return x;
            }
        }
        else
        {
            int a = getans(ar, x);
            if (a == x)
            {
                return x;
            }
        }
        x++;
    }
    return -1;
}

};