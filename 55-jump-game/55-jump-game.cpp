class Solution {
public:
    bool canJump(vector<int> &nums, int si, int ei, int *ar)
{
    if (si == ei)
    {
        return true;
    }

    int n = ei - si + 1;

    if (ar[n] != -2)
    {
        return ar[n];
    }

    for (int i = 1; i <= nums[si]; i++)
    {
        int ans = canJump(nums, si + i, ei , ar);
        if (ans == true)
        {
            ar[n] = true;
            return ar[n];
        }
    }
    ar[n] = false;
    return ar[n];
}

bool canJump(vector<int> &nums)
{
    int n = nums.size();
    int *ar = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        ar[i] = -2;
    }
    return canJump(nums, 0, nums.size() - 1, ar);
}
};