class Solution {
public:
bool isMatch(string s, string p)
{
    if (p.length() == 0)
    {
        return s.length() == 0;
    }
    if (p.length() > 1 && p[1] == '*')
    {
        if (isMatch(s, p.substr(2)))
        {
            return true;
        }
        if (s[0] == p[0] || p[0] == '.' && s.length() > 0)
        {
            return isMatch(s.substr(1), p);
        }
        return false;
    }
    if (s[0] == p[0] || p[0] == '.' && s.length() > 0)
    {
        return isMatch(s.substr(1), p.substr(1));
    }
    return false;
}
};