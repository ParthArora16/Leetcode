class Solution {
public:
    int majorityElement(vector<int> &ar)
{
    unordered_map<int, int> m;
    int ans = 0;
    int num = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        m[ar[i]]++;
        if (m[ar[i]] > ans)
        {
            ans = m[ar[i]];
            num = ar[i];
        }
    }
    return num;
}
};