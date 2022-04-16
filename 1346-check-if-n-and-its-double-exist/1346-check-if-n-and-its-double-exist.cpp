class Solution {
public:
    bool checkIfExist(vector<int> &ar)
{
    unordered_map<int, int> mymap;
    for (int i = 0; i < ar.size(); i++)
    {
        if (mymap.count(2 * ar[i]) == 1)
        {
            return true;
        }
        int a = ar[i] / 2;
        if (mymap.count(a) == 1)
        {
            if (2 * a == ar[i])
            {
                return true;
            }
        }
        mymap[ar[i]]++;
    }
    return false;
}
};