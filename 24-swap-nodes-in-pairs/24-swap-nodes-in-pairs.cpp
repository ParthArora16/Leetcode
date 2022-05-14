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
   void helper(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    swap(head->val, head->next->val);
    helper(head->next->next);
}

ListNode *swapPairs(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    helper(head);
    return head;
}
};