class Solution {
public:

int addDigits(int n)
{
    if (n <= 9)  return n;
    int sum;
    while (n > 9)
    {
        sum = 0;
        for (int i = n; i != 0; i /= 10)  sum += i % 10;
        n = sum;
    }
    return n;
}
};