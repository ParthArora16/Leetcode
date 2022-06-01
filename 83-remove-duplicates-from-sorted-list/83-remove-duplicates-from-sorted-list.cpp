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
    ListNode *deleteDuplicates(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    ListNode *fh = head;
    ListNode *ft = head;
    ListNode *temp = head->next;
    while (temp != NULL)
    {
        if (temp->val != ft->val)
        {
            ft->next = temp;
            ft = ft->next;
        }
        temp = temp->next;
    }
    ft->next = NULL;
    return fh;
}
};