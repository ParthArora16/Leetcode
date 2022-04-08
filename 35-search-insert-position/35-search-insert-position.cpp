class Solution {
public:
    int searchInsert(vector<int> &ar, int target)
{
    int n = ar.size();
    int i = 0;
    int j = n - 1;
    int pos = 0;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (target == ar[mid])
        {
            return mid;
        }
        else if (target >ar[mid])
        {
            pos = mid + 1;
            i = mid + 1;
        }
        else
        {
            pos = mid;
            j = mid - 1;
        }
    }
    if(pos < 0){
        return 0;
    }
        return pos;
}
};