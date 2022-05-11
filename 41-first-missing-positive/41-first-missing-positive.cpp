class Solution {
public:
    int firstMissingPositive(vector<int> &ar)
{
    unordered_map<int, int> mymap;
    for (int i = 0; i < ar.size(); i++)
    {
        mymap[ar[i]]++;
    }
    for (int i = 1; i <= ar.size(); i++)
    {
        if (mymap.count(i) == 0)
        {
            return i;
        }
    }
    return ar.size() + 1;
}
};