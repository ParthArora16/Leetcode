class Solution {
public:
    vector<int> intersect(vector<int> &ar1, vector<int> &ar2)
{
    unordered_map<int, int> map;
    vector<int> v;
    for (int i = 0; i < ar2.size(); i++)
    {
        map[ar2[i]]++;
    }
    for (int i = 0; i < ar1.size(); i++)
    {
        if (map[ar1[i]] >= 1)
        {
            v.push_back(ar1[i]);
            map[ar1[i]]--;
        }
    }
    return v;
}
};