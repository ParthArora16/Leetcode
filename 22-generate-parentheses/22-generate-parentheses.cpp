class Solution {
public:
void generateParenthesis(int n, int openN, int closedN, string s, vector<string>& v)
{
    if (openN == n && closedN == n)
    {
        v.push_back(s);
        return;
    }

    if (openN < n)
    {
        s.push_back('(');
        generateParenthesis(n, openN + 1, closedN, s, v);
        s.pop_back();
    }

    if (closedN < openN)
    {
        s.push_back(')');
        generateParenthesis(n, openN, closedN + 1, s, v);
        s.pop_back();
    }
}

vector<string> generateParenthesis(int n)
{
    vector<string> v;
    string s = "";
    generateParenthesis(n, 0, 0, s, v);
    return v;
}
};