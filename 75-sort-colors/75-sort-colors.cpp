class Solution {
public:
    void sortColors(vector<int>& ar) 
    {
    // i1 = index1 , i2 = index2         
    int i1 = 0,i2 = ar.size() - 1 ,i = 0;
    while (i <= i2)
    {
        if (ar[i] == 0) swap(ar[i++], ar[i1++]);
        else if (ar[i] == 2) swap(ar[i], ar[i2--]);
        else i++;
    }
    }
};