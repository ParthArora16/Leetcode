class Solution {
public:
    int removeElement(vector<int> &ar, int x)
{
    int index = 0;
    int n = ar.size();
    for (int i = 0; i < n; i++)
    {
        if (ar[i] != x)
        {
            ar[index] = ar[i];
            index++;
        }
    }
    return index;
}
};