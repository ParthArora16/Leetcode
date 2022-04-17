class Solution {
public:
    double average(vector<int> &salary)
{
    sort(salary.begin(), salary.end());
    long long int ans = 0;
    for (int i = 1; i < salary.size() - 1; i++)
    {
        ans += salary[i];
    }
    return (double)(ans) / (salary.size() - 2);
}
};