class Solution {
public:
bool checkIfExist(vector<int> &ar)
{
    int count = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < ar.size(); i++)
    {
        if(ar[i] == 0){
            count++;
        }
        map[ar[i]] = i;
    }
    if(count >= 2){
        return true;
    }
    for (int i = 0; i < ar.size(); i++)
    {
        if (map.count(ar[i] * 2) == 1)
        {
            if (map[ar[i]] != map[ar[i] * 2])
            {
                return true;
            }
        }
    }
    return false;
}
};