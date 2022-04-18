class Solution {
public:
    int maxDistance(vector<int> &nums1, vector<int> &nums2)
{
    int ans = 0;

    int n = nums1.size();
    int m = nums2.size() - 1;
        
    for (int i = 0; i < n; i++)
    {
        int low = i , high = m;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums2[mid] < nums1[i])
            {
                high = mid - 1;
            }
            else
            {
                if (mid + 1 <= high && nums2[mid + 1] >= nums1[i])
                {
                    low = mid + 1;
                }
                else
                {
                    ans = max(ans, mid - i);
                    break;
                }
            }
        }
    }
    return ans;
}
};