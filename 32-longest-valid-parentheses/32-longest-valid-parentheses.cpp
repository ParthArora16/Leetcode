class Solution {
public:
    int longestValidParentheses(string s)
{
    stack<int> s1;
    int ans = 0;
    s1.push(-1);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(')
        {
            s1.push(i);
        }
        else
        {
            s1.pop();
            if (s1.empty())
            {
                s1.push(i);
            }
            else
            {
                ans = max(ans, i - s1.top());
            }
        }
    }
    return ans;
}
};