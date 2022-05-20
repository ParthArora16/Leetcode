class Solution {
public:
   int maxArea(vector<int> &height)
{
    int si = 0;
    int ei = height.size() - 1;
    int fnas = 0;

    while (si < ei)
    {
        int ans = (ei - si) * min(height[si], height[ei]);
        if (height[ei] > height[si])
        {
            // max height ans max distance
            si++;
        }
        else
        {
            // height at ei will be max for others heighs greater ans smaller than height of si
            // and width decreases therefore it will never resut to maximum;
            ei--;
        }
        fnas = max(fnas, ans);
    }
    return fnas;
}
};