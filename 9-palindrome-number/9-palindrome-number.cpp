#include <math.h>
class Solution {
public:
    int length(int x)
{
    if (x <= 9)
    {
        return 1;
    }
    return length(x / 10) + 1;
}

int reversehelper(int x)
{
    long long int sum = 0;
    if(x >= 2147483647 || x <= -2147483648 ){return 0;}
    int n = length(x);
    int i = x;
    int k = 0;
    while (i > 0)
    {
        if(i >= 2147483647 || i<= -2147483648 ){return 0;}
        int a = i % 10;
        i = i / 10;
        sum += (a * pow(10, n - k - 1));
         if(sum >= 2147483647 || sum <= -2147483648 ){return 0;}
        k++;
    }
    return sum;
}

int reverse(int x)
{
    if(x >= 2147483647 || x <= -2147483648 ){return 0;}
    if (x < 0)
    {
        return -reversehelper(-x);
    }
    return reversehelper(x);
}

bool isPalindrome(int x)
{
    if(x >= 2147483647 || x <= -2147483648 ){return false;}
    if (x < 0)
    {
        return false;
    }
    int y = reverse(x);
    if (x != y)
    {
        return false;
    }
    return true;
}
};