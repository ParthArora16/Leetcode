class Solution {
public:
    int longestValidParentheses(string s)
{
    stack<char> s1;
    stack<int> index;
    int ans = 0;
    index.push(-1);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(')
        {
            s1.push('(');
            index.push(i);
        }
        else
        {
            if (s1.empty())
            {
                index.push(i);
            }
            if (!s1.empty())
            {
                s1.pop();
                index.pop();
                ans = max(ans, i - index.top());
            }
        }
    }
    return ans;
}
};