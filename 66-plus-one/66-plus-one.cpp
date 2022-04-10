class Solution {
public:
    vector<int> plusOne(vector<int> &digits)
{
    int carry = 1 , n = digits.size() , i = n - 1;
    if (digits[i] < 9)
    {
        digits[i]++;
        return digits;
    }
    while (i >= 0)
    {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
        i--;
    }
    if (carry != 0)
    {
        vector<int> ans;
        ans.push_back(carry);
        for (int i = 0; i < n; i++)
        {
            ans.push_back(digits[i]);
        }
        return ans;
    }
    return digits;
}
};