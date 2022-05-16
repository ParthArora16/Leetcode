class Solution {
public:
    int lengthOfLastWord(string s)
{
    int j = s.length() - 1, count = 0;
    while (s[j] == ' ')
    {
        j--;
    }
    while(s[j] != ' ' && j > 0)
    {
        count++;
        j--;
    }
    if(j == 0 && s[0] != ' ')
    {
     return count + 1;  
    } 
    return count;
}
};