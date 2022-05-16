class Solution {
public:
    bool canJump(vector<int> &ar)
{
    int goal = ar.size() - 1;
    for (int i = ar.size() - 2; i >= 0; i--)
    {
        if (ar[i] >= goal - i)
        {
            goal = i;
        }
    }
    return goal == 0;
}
};