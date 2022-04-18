class Solution {
public:
    int subtractProductAndSum(int n)
{
    int sum = 0, product = 1;
    for (int i = n; i > 0; i = i / 10)
    {
        sum += i % 10;
        product *= i % 10;
    }
    return product - sum;
}
};