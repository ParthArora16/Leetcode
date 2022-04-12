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
    int length(ListNode *head)
{
    int count = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

ListNode *rotateRight(ListNode *head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    int n = length(head);
    if(n == 0){
        return head;
    }
    k = k % n;
    if(k == 0){
        return head;
    }
    int i = n - k, count = 0;
    ListNode *temp = head;
    while (count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    ListNode *fh = temp->next;
    temp->next = NULL;
    ListNode *ft = fh;
    while (ft->next != NULL)
    {
        ft = ft->next;
    }
    ft->next = head;
    return fh;
}
};