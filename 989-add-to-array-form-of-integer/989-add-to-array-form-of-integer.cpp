class Solution {
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
{
    int carry = 0;
    vector<int> v;
    int i = num.size() - 1;
    while (i >= 0)
    {
        int val = carry + num[i] + k % 10;
        i--;
        k /= 10;
        carry = val / 10;
        v.push_back(val % 10);
    }
    while(k > 0){
        int val = carry + k % 10;
        k /= 10;
        carry = val / 10;
        v.push_back(val % 10);
    }
    if (carry > 0)
    {
        v.push_back(carry);
    }
    reverse(v.begin(), v.end());
        return v;
}
};