class Solution {
public:
    vector<int> intersection(vector<int> &ar1, vector<int> &ar2)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < ar2.size(); i++)
        {
            m[ar2[i]]++;
        }
        vector<int> ans;
        for (int i = 0; i < ar1.size(); i++)
        {
            if (m.count(ar1[i]) > 0)
            {
                ans.push_back(ar1[i]);
                m.erase(ar1[i]);
            }
        }
        return ans;
    }
};