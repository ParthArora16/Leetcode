class Solution {
public:
    void rotate(vector<int> &ar, int k)
{
    int n = ar.size();
    if(n <= 1)
    {
        return;    
    }
    k = k % n;
    int *arr = new int[n];
    int si = 0;
    for (int i = n - k; i < n; i++)
    {
        arr[si++] = ar[i];
    }
    for (int i = 0; i < n - k; i++)
    {
        arr[si++] = ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        ar[i] = arr[i];
    }
}
};