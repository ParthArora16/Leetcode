class Solution {
public:
    int trap(vector<int> &ar)
{
    vector<int> leftmax(ar.size());
    vector<int> rightmax(ar.size());

    leftmax[0] = 0;
    for (int i = 1; i < leftmax.size(); i++)
    {
        leftmax[i] = max(leftmax[i - 1], ar[i - 1]);
    }
    rightmax[rightmax.size() - 1] = 0;
    for (int i = rightmax.size() - 2; i >= 0; i--)
    {
        rightmax[i] = max(rightmax[i + 1], ar[i + 1]);
    }

    for (int i = 0; i < ar.size(); i++)
    {
        ar[i] = min(leftmax[i], rightmax[i]) - ar[i] > 0 ? min(leftmax[i], rightmax[i]) - ar[i] : 0;
    }

    int sum = 0;

    for (int i = 0; i < ar.size(); i++)
    {
        sum += ar[i];
    }

    return sum;
}
};