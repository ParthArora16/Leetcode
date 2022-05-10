class Solution {
public:
    int missingNumber(vector<int> &ar)
{
    int n = ar.size() ,sum = n * (n + 1) / 2 , count = 0;
    for (int i = 0; i < n; i++)  count += ar[i];
    return sum - count;
}
};