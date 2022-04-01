class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &ar, int target)
{
    sort(ar.begin(), ar.end());
    int n = ar.size();
    set<pair<pair<int, int>, pair<int, int>>> s1;
    vector<vector<int>> fans;
    int i = 0;
    while (i < n - 3)
    {
        int j = i + 1;
        while (j < n - 2)
        {
            int k = j + 1;
            int l = n - 1;
            int x = target - ar[i] - ar[j];
            while (k < l && k < n - 1 && l < n)
            {
                if (ar[k] + ar[l] == x)
                {
                    if (s1.count({{ar[i], ar[j]}, {ar[k], ar[l]}}) == 0)
                    {
                        vector<int> v;
                        v.push_back(ar[i]);
                        v.push_back(ar[j]);
                        v.push_back(ar[k]);
                        v.push_back(ar[l]);
                        fans.push_back(v);
                        s1.insert({{ar[i], ar[j]}, {ar[k], ar[l]}});
                    }
                    l--;
                    k++;
                }
                else if (ar[k] + ar[l] > x)
                {
                    l--;
                }
                else
                {
                    k++;
                }
            }
            j++;
        }
        i++;
    }
    return fans;
}
};