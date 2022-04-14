class Solution {
public:
    int findKthPositive(vector<int> &ar, int k)
{
    unordered_map<int, int> mymap;
    for (int i = 0; i < ar.size(); i++)
    {
        mymap[ar[i]]++;
    }
    int count = 0;
    int i = 1;
    while (count < k)
    {
        if (mymap.count(i++) == 0)
        {
            count++;
        }
    }
    return i - 1;
}

};