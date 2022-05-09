class Solution {
public:
    int majorityElement(vector<int> &ar)
{
    int candidate = ar[0];
    int count = 1;
    for (int i = 1; i < ar.size(); i++)
    {
        if (ar[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                i++;
                candidate = ar[i];
                count = 1;
            }
        }
    }
    return candidate;
}
};