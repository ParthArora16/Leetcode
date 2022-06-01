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
int getsize(ListNode *head)
{
    if (head == NULL)
    {
        return 0;
    }
    return getsize(head->next) + 1;
}

ListNode *rotateRight(ListNode *head, int k)
{
   if (head == NULL || head->next == NULL)
    {
        return head;
    }
    int n = getsize(head);
    k = k % n;

    if (k == 0)
    {
        return head;
    }
    
    ListNode *temp1 = head;
    ListNode *temp2 = head;

    ListNode *fh = NULL;

    int count = 0;

    while (temp2 != NULL && count < k)
    {
        temp2 = temp2->next;
        count++;
    }
    while (temp2 != NULL && temp2->next != NULL)
    {
        temp2 = temp2->next;
        temp1 = temp1->next;
    }

    if (temp1 != NULL)
    {
        fh = temp1->next;
        temp1->next = NULL;
    }
    if (temp2 != NULL)
    {
        temp2->next = head;
    }
    return fh;
}
};