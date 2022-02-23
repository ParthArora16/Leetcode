#include <unordered_map>
class Solution {
public:
   vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map;
    vector<int> output;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.find(target-nums[i]) != map.end())
        {
            output.push_back(map[target - nums[i]]);
            output.push_back(i);
            return output;
        }
        map[nums[i]] = i;
    }
    return output;
}
};