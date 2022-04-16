class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>> &ar, int k)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < ar.size(); i++)
    {
        int low = 0;
        int high = ar[i].size() - 1;
        bool flag = false;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (ar[i][mid] == 0)
            {
                high = mid - 1;
            }
            else
            {
                if (mid + 1 <= ar[i].size() - 1)
                {
                    if (ar[i][mid + 1] == 1)
                    {
                        low = mid + 1;
                    }
                    else
                    {
                        v.push_back({mid + 1, i});
                        flag = true;
                        break;
                    }
                }
                else
                {
                    v.push_back({mid + 1, i});
                    flag = true;
                    break;
                }
            }
        }
        if (flag == false)
        {
            v.push_back({0, i});
        }
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        ans.push_back(v[i].second);
    }
    return ans;
}
};