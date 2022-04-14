class Solution {
public:
   bool checkInclusion(string s1, string s2)
{
    if (s1.length() == 0)
    {
        return true;
    }
    if (s1.length() > s2.length())
    {
        return false;
    }
    map<char, int> mymap1;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        mymap1[s1[i]]++;
    }
    map<char, int> mymap2;
       int n = s1.length();
    for (int i = 0; i < n; i++)
    {
        mymap2[s2[i]]++;
    }
    if (mymap1 == mymap2)
    {
        return true;
    }
    int si = 0;
    mymap2[s2[si]]--;
    if (mymap2[s2[si]] == 0)
    {
        mymap2.erase(s2[si]);
    }
    si++;
    int i = s1.length();
    while (s2[i] != '\0')
    {
        mymap2[s2[i]]++;
        if (mymap1 == mymap2)
        {
            return true;
        }
        else
        {
            mymap2[s2[si]]--;
            if (mymap2[s2[si]] == 0)
            {
                mymap2.erase(s2[si]);
            }
            si++;
        }
        i++;
    }
    return false;
}
};