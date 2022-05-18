class Solution {
public:
    string getstring(char d)
{
    if (d == '2')
    {
        return "abc";
    }
    if (d == '3')
    {
        return "def";
    }
    if (d == '4')
    {
        return "ghi";
    }
    if (d == '5')
    {
        return "jkl";
    }
    if (d == '6')
    {
        return "mno";
    }
    if (d == '7')
    {
        return "pqrs";
    }
    if (d == '8')
    {
        return "tuv";
    }
    if (d == '9')
    {
        return "wxyz";
    }
    return " ";
}

void helper(string digits, vector<string> &v)
{
    if (digits.size() == 0)
    {
        v.push_back("");
        return;
    }

    helper(digits.substr(1), v);
    string s = getstring(digits[0]);
    int smallans = v.size();
    for (int i = 0; i < s.length() - 1; i++)
    {
        for (int j = 0; j < smallans; j++)
        {
            v.push_back(v[j]);
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < smallans; j++)
        {
            v[j + i * smallans] = s[i] + v[j + i * smallans];
        }
    }
}

vector<string> letterCombinations(string digits)
{
    if (digits.length() == 0)
    {
        vector<string> v;
        return v;
    }
    vector<string> v;
    helper(digits, v);
    return v;
}
};