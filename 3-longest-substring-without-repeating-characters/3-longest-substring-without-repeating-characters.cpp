class Solution {
public:
    int lengthOfLongestSubstring(string s)
{
    vector<int> chars(128, 0);
    int i = 0, j = 0;
    int ans = 0;
    while (j < s.length())
    {
        chars[s[j]]++;
        while (chars[s[j]] > 1)
        {
            chars[s[i]]--;
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}
};