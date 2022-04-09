class Solution {
public:
   void reversearray(vector<int> &ar, int si, int ei)
{
    while (si <= ei)
    {
        swap(ar[si], ar[ei]);
        si++;
        ei--;
    }
}

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    reversearray(nums, 0, n - 1);
    reversearray(nums, 0, k - 1);
    reversearray(nums, k, n - 1);
}
};