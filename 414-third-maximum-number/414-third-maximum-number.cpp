class Solution {
public:
int remove_duplicates(vector<int> &ar)
{
    int index = 1;
    for (int i = 1; i < ar.size(); i++)
    {
        if (ar[i] != ar[i - 1])
        {
            ar[index++] = ar[i];
        }
    }
    return index;
}

int thirdMax(vector<int> &nums)
{
    sort(nums.begin(), nums.end() , greater<int>());
    int n = remove_duplicates(nums);
    if (n < 3)
    {
        return nums[0];
    }
    return nums[2];
}
};