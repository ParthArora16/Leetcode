class Solution {
public:
    vector<int> intersection(vector<int> &ar1, vector<int> &ar2)
{
    sort(ar2.begin(), ar2.end());
    unordered_set<int> s1;
    vector<int> ans;
    for (int i = 0; i < ar1.size(); i++)
    {
        int lo = 0;
        int hi = ar2.size() - 1;
        int target = ar1[i];
        int mid;
        bool flag = false;
        while (lo <= hi)
        {
            mid = (lo + hi) / 2;  
            if (ar2[mid] == target)
            {
                flag = true;
                break;
            }
            else if (target > ar2[mid])
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        if (flag == true && s1.count(ar1[i]) == 0)
        {
            s1.insert(ar1[i]);
            ans.push_back(ar1[i]);
        }
    }
    return ans;
}
};