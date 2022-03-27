class Solution {
public:
   int maxArea(vector<int> &height)
{
    int n = height.size();
    int si = 0;
    int ei = n - 1;
    int ans = 0;
    while (si < ei)
    {
        int smallans = (ei - si) * min(height[si], height[ei]);
        if (height[si] < height[ei])
        {
            si++;
        }
        else
        {
            ei--;
        }
        ans = max(smallans, ans);
    }
    return ans;
}
};