class Solution {
public:
   void nextPermutation(vector<int> &ar)
{
    int n = ar.size();
    int i = n - 1;
    int j = i - 1;
    while (j >= 0)
    {
        if (ar[j] >= ar[i])
        {
            i--;
            j--;
        }
        else
        {
            if (ar[j] < ar[n - 1])
            {
                swap(ar[j], ar[n - 1]);
                sort(ar.begin() + j + 1, ar.end());
                return;
            }
            else
            {
                int ans = INT_MAX;
                int k = j + 1;
                int index = 0;
                while (k < n - 1)
                {
                    if (ar[k] > ar[j])
                    {
                        ans = min(ans, ar[k]);
                        index = k;
                    }
                    k++;
                }
                swap(ar[j], ar[index]);
                sort(ar.begin() + j + 1, ar.end());
                return;
            }
        }
    }
    sort(ar.begin(), ar.end());
}
};