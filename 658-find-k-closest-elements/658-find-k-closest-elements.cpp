class Solution {
public:
    vector<int> findClosestElements(vector<int> &ar, int k, int x)
{
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push({abs(ar[i] - x), ar[i]});
    }
    for (int i = k; i < ar.size(); i++)
    {
        if (abs(ar[i] - x) < pq.top().first)
        {
            pq.pop();
            pq.push({abs(ar[i] - x), ar[i]});
        }
    }
    vector<int> ans;
    while (!pq.empty())
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(), ans.end());
    return ans;
}
};