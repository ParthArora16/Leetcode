class Solution {
public:
    int search(vector<int> &ar, int target)
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
            return mid;
        }
        else if (target > ar[mid] && target <= ar[j])
        {
            // right part is definately sorted
            i = mid + 1;
        }
        else if (target >= ar[i] && target < ar[mid])
        {
            // left part will definately sorted
            j = mid - 1;
        }
        else if (ar[i] > ar[mid])
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return -1;
}
};