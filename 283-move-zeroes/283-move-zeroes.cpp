class Solution {
public:
    void moveZeroes(vector<int> &ar)
{
    int n = ar.size();
    int i = 0, index = 0;
    while (i < n)
    {
        if (ar[i] != 0)
        {
            swap(ar[i], ar[index]);
            index++;
        }
        i++;
    }
}
};