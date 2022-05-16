class Solution {
public:
int jump(vector<int> &nums)
{
    int goal = nums.size() - 1;
    int pointer = 0;
    int count = 0;
    while (goal > 0)
    {
        pointer = 0;
        for (int i = goal - 1; i >= 0; i--)
        {
            if (nums[i] >= goal - i)
            {
                pointer = i;
            }
        }
        goal = pointer;
        count++;
    }
    return count;
}
};