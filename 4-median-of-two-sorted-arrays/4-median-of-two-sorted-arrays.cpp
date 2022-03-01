class Solution {
public:
   #include <vector>

vector<int> mergearray(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> output;
    int i = 0;
    int j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] < nums2[j])
        {
            output.push_back(nums1[i]);
            i++;
        }
        else if (nums2[j] < nums1[i])
        {
            output.push_back(nums2[j]);
            j++;
        }
        else
        {
            output.push_back(nums1[i]);
            output.push_back(nums2[j]);
            i++;
            j++;
        }
    }
    while (i < nums1.size())
    {
        output.push_back(nums1[i]);
        i++;
    }
    while (j < nums2.size())
    {
        output.push_back(nums2[j]);
        j++;
    }
    return output;
}

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> output = mergearray(nums1, nums2);
    int n = output.size();
    if (n % 2 != 0)
    {
        int mid = (n - 1) / 2;
        double ans = output.at(mid);
        return ans;
    }
    int mid = (n - 1) / 2;
    double ans = ((double)(output.at(mid) + output.at(mid + 1)) / 2);
    return ans;
}
};