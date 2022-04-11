class Solution {
public:
    void reverse(string &s, int si, int ei)
{
    while (si < ei) swap(s[si++], s[ei--]);
}

string reverseWords(string s)
{
    int si = 0 , ei = 0 , i = 0;
    for (; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            reverse(s, si, i - 1);
            si = i + 1;
        }
    }
    reverse(s, si, i - 1);
    return s;
}
};