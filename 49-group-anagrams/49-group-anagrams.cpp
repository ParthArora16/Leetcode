class Solution {
public:
vector<vector<string>> groupAnagrams(vector<string> &v)
{
    vector<vector<string>> result;
    unordered_map<string, vector<string>> mymap;
    for (int i = 0; i < v.size(); i++)
    {
        string s = v[i];
        sort(s.begin(), s.end());
        mymap[s].push_back(v[i]);
    }
    unordered_map<string, vector<string>>::iterator it = mymap.begin();
    while (it != mymap.end())
    {
        result.push_back(it->second);
        it++;
    }
    return result;
}
};