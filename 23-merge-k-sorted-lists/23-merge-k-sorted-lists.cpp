/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *mergeKLists(vector<ListNode *> &v)
{
    if (v.size() == 0)
    {
        return NULL;
    }
    ListNode *head = NULL;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < v.size(); i++)
    {
        ListNode *temp = v[i];
        if (temp != NULL && head == NULL)
        {
            head = temp;
        }
        if (temp != NULL)
        {
            while (temp->next != NULL)
            {
                pq.push(temp->val);
                temp = temp->next;
            }
            pq.push(temp->val);
            int k = i;
            while (k + 1 < v.size() && v[k + 1] == NULL)
            {
                k++;
            }
            if (k + 1 < v.size())
            {
                temp->next = v[k + 1];
            }
        }
    }
    ListNode *temp = head;
    while (temp != NULL)
    {
        temp->val = pq.top();
        pq.pop();
        temp = temp->next;
    }
    return head;
}
};