class Solution {
public:
    bool checkInclusion(string s1, string s2, unordered_map<char, int> &map1)
{
    if (s1.length() == 0)
    {
        return true;
    }
    if (s1.length() > s2.length())
    {
        return false;
    }
    unordered_map<char, int> mymap;
    int i = 0;
    while (i < s1.size())
    {
        mymap[s2[i]]++;
        i++;
    }
    if (map1 == mymap)
    {
        return true;
    }
    return checkInclusion(s1, s2.substr(1), map1);
}

bool checkInclusion(string s1, string s2)
{
    unordered_map<char, int> map1;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        map1[s1[i]]++;
    }
    return checkInclusion(s1, s2, map1);
}

};