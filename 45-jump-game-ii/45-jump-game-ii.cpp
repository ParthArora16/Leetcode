class Solution {
public:
    int jump(vector<int> &nums)
{
    int goal = nums.size() - 1;
    stack<int> s1;
    int count = 0;
    while (goal > 0)
    {
        for (int i = goal - 1; i >= 0; i--)
        {
            if (nums[i] >= goal - i)
            {
                s1.push(i);
            }
        }
        goal = s1.top();
        count++;
        s1.pop();
    }
    return count;
}
};