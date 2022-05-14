class Solution {
public:
void generateParenthesis(int n, int open_count, int closed_count, string& s, vector<string>& v)
{
    if (open_count == n && closed_count == n)
    {
        v.push_back(s);
        return;
    }

    if (open_count < n)
    {
        s.push_back('(');
        generateParenthesis(n, open_count + 1, closed_count, s, v);
        s.pop_back();
    }

    if (closed_count < open_count)
    {
        s.push_back(')');
        generateParenthesis(n, open_count, closed_count + 1, s, v);
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