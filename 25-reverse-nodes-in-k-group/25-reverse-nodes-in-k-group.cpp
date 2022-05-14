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
    
    int size(ListNode *head)
{
    if (head == NULL)
    {
        return 0;
    }
    return size(head->next) + 1;
}
    
    ListNode *reverseKGroup(ListNode *head, int n, int k)
{
    if (head == NULL || head->next == NULL || n < k)
    {
        return head;
    }
    int count = 0;
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *next = NULL;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    ListNode * h1 = reverseKGroup(curr , n - k , k);
    head->next = h1;
    return prev;
}

ListNode *reverseKGroup(ListNode *head, int k)
{
    int n = size(head);
    return reverseKGroup(head, n, k);
}
};