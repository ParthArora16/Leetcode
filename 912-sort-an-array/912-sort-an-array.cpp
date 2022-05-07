class Solution {
public:
    void Merge(vector<int> &ar, int si, int ei)
{
    int i = si;
    int mid = (si + ei) / 2;
    int j = mid + 1;
    int n = ei - si + 1;
    int arr[100000];
    int k = si;
    while (i <= mid && j <= ei)
    {
        if (ar[i] < ar[j])
        {
            arr[k++] = ar[i++];
        }
        else
        {
            arr[k++] = ar[j++];
        }
    }
    while (i <= mid)
    {
        arr[k++] = ar[i++];
    }
    while (j <= ei)
    {
        arr[k++] = ar[j++];
    }
    for (int i = si; i <= ei; i++)
    {
        ar[i] = arr[i];
    }
}

void MergeSort(vector<int> &ar, int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    MergeSort(ar, si, (si + ei) / 2);
    MergeSort(ar, (si + ei) / 2 + 1, ei);
    Merge(ar, si, ei);
}

vector<int> sortArray(vector<int> &nums)
{
    MergeSort(nums, 0, nums.size() - 1);
    return nums;
}
};