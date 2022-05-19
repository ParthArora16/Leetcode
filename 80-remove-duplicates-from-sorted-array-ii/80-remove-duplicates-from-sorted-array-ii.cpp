class Solution {
public:
   int removeDuplicates(vector<int> &ar)
{
    int index = 1;
    int n = ar.size();
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] != ar[i - 1])
        {
            count = 1;
            ar[index] = ar[i];
            index++;
        }
        else if (ar[i] == ar[i - 1] && count < 2)
        {
            count++;
            ar[index] = ar[i];
            index++;
        }
    }
    return index;
}
};