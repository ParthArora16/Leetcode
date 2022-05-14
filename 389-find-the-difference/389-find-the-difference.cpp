class Solution {
public:
    char findTheDifference(string s, string t)
{
    unordered_map<char, int> mymap;
    for (int i = 0; i < s.length(); i++)
    {
        mymap[s[i]]++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        mymap[t[i]]--;
        if (mymap[t[i]] == 0)
        {
            mymap.erase(t[i]);
        }
    }
    unordered_map<char, int>::iterator it = mymap.begin();
    return it->first;
}
};