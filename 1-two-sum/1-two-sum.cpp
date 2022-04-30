class Solution {
public:
    vector<int> twoSum(vector<int> &ar, int target)
{
    unordered_map<int, int> mymap;
    vector<int> v;
    for (int i = 0; i < ar.size(); i++)
    {
        if (mymap.count(target - ar[i]) > 0)
        {
            v.push_back(mymap[target - ar[i]]);
            v.push_back(i);
            break;
        }
        mymap[ar[i]] = i;
    }
    return v;
}
};