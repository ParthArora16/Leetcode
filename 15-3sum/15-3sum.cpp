class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &ar)
{
    vector<vector<int>> fans;
    set<pair<int, pair<int, int>>> s1;
    sort(ar.begin(), ar.end());
    int n = ar.size();
    int i = 0;
    while (i < n - 2)
    {
        int target = -ar[i];
        int k = i + 1;
        int j = n - 1;
        while (k < j)
        {
            if (ar[k] + ar[j] == target)
            {
                if (s1.count({ar[i], {ar[k], ar[j]}}) > 0)
                {
                }
                else
                {
                    vector<int> v;
                    v.push_back(ar[i]);
                    v.push_back(ar[k]);
                    v.push_back(ar[j]);
                    s1.insert({ar[i], {ar[k], ar[j]}});
                    fans.push_back(v);
                    v.clear();
                }
                k++;
            }
            if (ar[k] + ar[j] > target)
            {

                j--;
            }
            else
            {
                k++;
            }
        }
        i++;
    }
    return fans;
}
};