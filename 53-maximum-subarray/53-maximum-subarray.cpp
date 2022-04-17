class Solution {
public:
    int maxSubArray(vector<int> &ar)
{ 
    int ans = INT_MIN;
    int currsum = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        currsum += ar[i];
        ans = max(currsum, ans); 
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    return ans;
}
};