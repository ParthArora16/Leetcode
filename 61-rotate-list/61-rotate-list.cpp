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
    ListNode *rotateRight(ListNode *head, int k)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    if(k == 0){
        return head;
    }

    ListNode *temp = head;
    int count = 1;
    while (temp != NULL && temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    k %= count;
    if (k == 0)
    {
        return head;
    }
    if (temp != NULL)
    {
        temp->next = head;
    }
    ListNode *fh = NULL;
    ListNode *temp2 = head;
    int n = 0;
    while (temp2 != NULL && n < count - k - 1)
    {
        temp2 = temp2->next;
        n++;
    }
    if (temp2 != NULL)
    {
        fh = temp2->next;
        temp2->next = NULL;
    }
    return fh;
}
};