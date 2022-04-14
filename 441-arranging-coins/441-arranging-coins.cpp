class Solution {
public:
   int arrangeCoins(int n)
{
    int count = 0;
    int i = 1;
    while (n >= 0)
    {
        n -= i;
        if (n >= 0)
        {
            count++;
        }
        i++;
    }
    return count;
}
};