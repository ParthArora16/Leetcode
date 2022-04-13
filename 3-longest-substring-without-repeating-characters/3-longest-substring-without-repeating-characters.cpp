class Solution {
public:
   int lengthOfLongestSubstring(string s, int n)
{
    if (n == 1 || n == 1)
    {
        return n;
    }
    int i = 0, j = 0, ans = 0;
    unordered_set<char> set1;
    while (j < n)
    {
        if (set1.count(s[j]) == 0)
        {
            set1.insert(s[j]);
            ans = max(j - i + 1, ans);
            j++;
        }
        else
        {
            while (set1.count(s[j]) == 1)
            {
                set1.erase(s[i]);
                i++;
            }
        }
    }
    return ans;
}

int lengthOfLongestSubstring(string s)
{
    int n = s.length();
    return lengthOfLongestSubstring(s, n);
}
};