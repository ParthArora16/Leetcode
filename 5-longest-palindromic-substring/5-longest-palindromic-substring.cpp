class Solution {
public:
   string longestPalindrome(string s)
{
    int ans = 0;
    int n = s.length();
    int fsi = 0;
    int fei = 0;
    int count = 0;

    for (int k = 0; k < n - 1; k++)
    {
        int i = k - 1;
        int j = k + 1;
        count = 1;
        if (count > ans)
        {
            ans = count;
            fsi = k;
            fei = k;
        }
        while (i >= 0 && j < n)
        {
            if (s[i] == s[j])
            {
                count += 2;
            }
            else
            {
                break;
            }
            i--;
            j++;
        }
        if (count > ans)
        {
            ans = count;
            fsi = i + 1;
            fei = j - 1;
        }
        if (s[k] == s[k + 1])
        {
            count = 2;
            int i = k - 1;
            int j = k + 2;
            if (count > ans)
            {
                ans = count;
                fsi = k;
                fei = k + 1;
            }
            while (i >= 0 && j < n)
            {
                if (s[i] == s[j])
                {
                    count += 2;
                }
                else
                {
                    break;
                }
                i--;
                j++;
            }
            if (count > ans)
            {
                ans = count;
                fsi = i + 1;
                fei = j - 1;
            }
        }
    }
    return s.substr(fsi, fei - fsi + 1);
}
};