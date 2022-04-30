class Solution {
public:
    vector<int> twoSum(vector<int> &ar, int target)
{
    unordered_map<int, int> mymap;
    for (int i = 0; i < ar.size(); i++)
    {
        if (mymap.count(target - ar[i]) > 0)
        {
            ar.resize(2,10);
            ar[0] = mymap[target - ar[i]];
            ar[1] = i;
            break;
        }
        mymap[ar[i]] = i;
    }
    return ar;
}
};