class Solution {
public:
    int peakIndexInMountainArray(vector<int>& ar) 
    {
        int n = ar.size();
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (ar[mid] > ar[mid + 1] && ar[mid] > ar[mid - 1])
        {
            return mid;
        }
        else if (ar[mid] < ar[mid + 1])
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return -1;    
    }
};