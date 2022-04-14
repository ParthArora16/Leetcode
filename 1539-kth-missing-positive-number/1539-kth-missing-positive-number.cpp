class Solution {
public:
    int findKthPositive(vector<int> &ar, int k)
{
    int missed = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        if (i == 0)
        {
            missed += ar[0] - 1;
            if (missed >= k)
            {
                return k;
            }
        }
        else
        {
            missed += ar[i] - ar[i - 1] - 1;
            if (missed >= k)
            {
                missed -= ar[i] - ar[i - 1] - 1;
                int result = ar[i - 1];
                while (missed++ < k)
                {
                    result++;
                }
                return result;
            }
        }
    }
    int result = ar[ar.size() - 1];
    result += k - missed;
        return result;
}
};