class Solution {
public:
       bool containsDuplicate(vector<int> &nums)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.count(nums[i]) == 1)
        {
            return true;
        }
        map[nums[i]]++;
    }
    return false;
}
};