class Solution {
public:
    int findKthPositive(vector<int> &ar, int k)
{
    unordered_map<int, int> mymap;
    for (int i = 0; i < ar.size(); i++)
    {
        mymap[ar[i]]++;
    }
    vector<int> ans;
    int count = 0;
    int i = 1;
    while (count < k)
    {
        if (mymap.count(i) == 0)
        {
            ans.push_back(i);
            count++;
        }
        i++;
    }
    return ans[k - 1];
}
};