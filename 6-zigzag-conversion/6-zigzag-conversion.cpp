class Solution {
public:
    string convert(string s, int n)
{
     if (n == 1)
    {
        return s;
    }   
    string ans = "";
    int d = 2 * (n - 1);
    for (int i = 0; i < s.length();)
    {
        ans += s[i];
        i += d;
    }
    for (int j = 1; j < n - 1; j++)
    {
        int d1 = 2 * (n - j - 1);
        int d2 = 2 * j;
        int count = 0;
        for (int i = j; i < s.length();)
        {
            ans += s[i];
            if (count % 2 == 0)
            {
                i += d1;
            }
            else
            {
                i += d2;
            }
            count++;
        }
    }
    d = 2 * (n - 1);
    for (int i = n - 1; i < s.length();)
    {
        ans += s[i];
        i += d;
    }
    return ans;
}
};