class Solution {
public:
    vector<int> topKFrequent(vector<int> &ar, int k)
{
    unordered_map<int, int> mymap;
    for (int i = 0; i < ar.size(); i++)
    {
        mymap[ar[i]]++;
    }
    priority_queue<pair<int, int>> pq;
    unordered_map<int, int>::iterator it = mymap.begin();
    while (it != mymap.end())
    {
        pq.push({it->second, it->first});
        it++;
    }
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}
};