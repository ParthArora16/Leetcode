class Solution {
public:
int longestValidParentheses(string s)
{
    int openN = 0, closedN = 0;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            openN++;
        }
        else
        {
            closedN++;
        }
        if (closedN > openN)
        {
            openN = 0;
            closedN = 0;
        }
        if (openN == closedN)
        {
            ans = max(ans, 2 * closedN);
        }
    }
    openN = closedN = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == ')')
        {
            closedN++;
        }
        else
        {
            openN++;
        }
        if (openN > closedN)
        {
            closedN = 0;
            openN = 0;
        }
        if (closedN == openN)
        {
            ans = max(ans, 2 * openN);
        }
    }
    return ans;
}
};