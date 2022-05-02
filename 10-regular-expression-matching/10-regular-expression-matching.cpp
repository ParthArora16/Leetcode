class Solution {
public:
    bool isMatch(string s, string p)
{
    // base case Empty pattern
    if (p.size() == 0)
    {
        return s.size() == 0;
    }
    // handling case when my * is at index 2 or 2nd char as * also means 0 char.
    if (p.length() > 1 && p[1] == '*')
    {
        if (isMatch(s, p.substr(2)))
        {
            return true;
        }
        if ((s[0] == p[0] || p[0] == '.') && s.length() > 0) // eg - aab , a*b -> ab , a*b; 
        {
            return isMatch(s.substr(1), p);
        }
        return false;
    }
    else
    {
        if ((s[0] == p[0] || p[0] == '.') && s.size() > 0)
        {
            return isMatch(s.substr(1),p.substr(1));
        }
        return false;
    }
}
};