class Solution {
public:
    int helper(vector<int> &ar, int target, bool first)
{
    int n = ar.size();
    int i = 0;
    int j = n - 1;
    int mid = 0;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (ar[mid] == target)
        {
            if (first)
            {
                if (mid - 1 >= 0 && ar[mid - 1] == target)
                {
                    j = mid - 1;
                }
                else
                {
                    return mid;
                }
            }
            else
            {
                if (mid + 1 <= j && ar[mid + 1] == target)
                {
                    i = mid + 1;
                }
                else
                {
                    return mid;
                }
            }
        }
        else if (target > ar[mid])
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return -1;
}

vector<int> searchRange(vector<int> &ar, int target)
{
    vector<int> ans;
    ans.push_back(helper(ar, target, true));
    ans.push_back(helper(ar, target, false));
    return ans;
}
};