class Solution {
public:
    int strStr(string s1, string s2)
{
    if (s2.size() == 0)
    {
        return 0;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if ((s1[i] == s2[0]) && (s1.substr(i, s2.size()) == s2))
        {
            return i;
        }
    }
    return -1;
}
};