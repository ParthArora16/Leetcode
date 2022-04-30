class Solution {
public:
    int lengthOfLongestSubstring(string s)
{
    unordered_set<char> s1;
    int i = 0, j = 0;
    int n = s.length();
    int ans = 0;
    while (j < n)
    {
        if (s1.count(s[j]) == 0)
        {
            ans = max(ans, j - i + 1);
            s1.insert(s[j]);
            j++;
        }
        else
        {
            while (s1.count(s[j]) != 0)
            {
                s1.erase(s[i]);
                i++;
            }
        }
    }
    return ans;
}
};