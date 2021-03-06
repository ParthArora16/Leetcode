class Solution {
public:
    int minimumDeletions(vector<int> &ar)
{
        if(ar.size() == 1){
            return 1;
        }
    int minimum = INT_MAX, maximum = INT_MIN, minindex = 0, maxindex = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        if (ar[i] < minimum)
        {
            minimum = ar[i];
            minindex = i;
        }
        if (ar[i] > maximum)
        {
            maximum = ar[i];
            maxindex = i;
        }
    }

    int count = 0;

    int si = 0, ei = ar.size() - 1;
    if (min(abs(si - minindex), abs(ei - minindex)) < min(abs(si - maxindex), abs(ei - maxindex)))
    {
        if (abs(si - minindex) < abs(ei - minindex))
        {
            count += abs(si - minindex) + 1;
            si = minindex + 1;
        }
        else
        {
            count += abs(ei - minindex) + 1;
            ei = minindex - 1;
        }
        if (abs(si - maxindex) < abs(ei - maxindex))
        {
            count += abs(si - maxindex) + 1;
            si = maxindex + 1;
        }
        else
        {
            count += abs(ei - maxindex) + 1;
            ei = maxindex - 1;
        }
    }
    else
    {
        if (abs(si - maxindex) < abs(ei - maxindex))
        {
            count += abs(si - maxindex) + 1;
            si = maxindex + 1;
        }
        else
        {
            count += abs(ei - maxindex) + 1;
            ei = maxindex - 1;
        }
        if (abs(si - minindex) < abs(ei - minindex))
        {
            count += abs(si - minindex) + 1;
            si = minindex + 1;
        }
        else
        {
            count += abs(ei - minindex) + 1;
            ei = minindex - 1;
        }
    }

    return count;
}
};