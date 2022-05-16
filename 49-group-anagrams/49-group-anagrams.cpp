class Solution {
public:
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> v;
    unordered_map<string, vector<string>> mymap;

    for (int i = 0; i < strs.size(); i++)
    {
        string s = strs[i];
        sort(s.begin(), s.end());
        mymap[s].push_back(strs[i]);
    }

    unordered_map<string, vector<string>>::iterator it = mymap.begin();
    while (it != mymap.end())
    {
        v.push_back(it->second);
        it++;
    }
    return v;
}
};