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
    ListNode *addTwoNumbers(ListNode *head1, ListNode *head2)
{
    ListNode *temp1 = head1, *temp2 = head2;
    int carry = 0;
    ListNode *fh = head1;
    ListNode *ft = temp1;
    while (temp1 != NULL && temp2 != NULL)
    {
        int data = temp1->val + temp2->val + carry;
        carry = data / 10;
        temp1->val = data % 10;
        temp2->val = data % 10;
        if (temp1->next == NULL)
        {
            ft = temp1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while (temp1 != NULL)
    {
        int data = temp1->val + carry;
        temp1->val = data % 10;
        carry = data / 10;
        if (temp1->next == NULL)
        {
            fh = head1;
            ft = temp1;
        }
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        int data = temp2->val + carry;
        temp2->val = data % 10;
        carry = data / 10;
        if (temp2->next == NULL)
        {
            fh = head2;
            ft = temp2;
        }
        temp2 = temp2->next;
    }
    if (carry > 0)
    {
        ListNode *newnode = new ListNode(carry);
        ft->next = newnode;
    }
    return fh;
}
};