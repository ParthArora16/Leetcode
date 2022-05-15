class Solution {
public:
   int longestValidParentheses(string s)
{
    int openN = 0, closedN = 0, maxlength = 0;
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
        if (openN == closedN)
        {
            maxlength = max(maxlength, 2 * closedN);
        }
        else if (closedN > openN)
        {
            openN = closedN = 0;
        }
    }
    openN = closedN = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '(')
        {
            openN++;
        }
        else
        {
            closedN++;
        }
        if (openN == closedN)
        {
            maxlength = max(maxlength, 2 * openN);
        }
        else if (openN > closedN)
        {
            openN = closedN = 0;
        }
    }
    return maxlength;
}
};