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
    ListNode *temp1 = head1;
    ListNode *temp2 = head2;

    ListNode *fh = NULL;
    ListNode *ft = NULL;

    int carry = 0;

    while (temp1 != NULL && temp2 != NULL)
    {
        int sum = temp1->val + temp2->val + carry;
        int put = sum % 10;
        carry = sum / 10;
        ListNode *newnode = new ListNode(put);
        if (fh == NULL)
        {
            fh = newnode;
            ft = newnode;
        }
        else
        {
            ft->next = newnode;
            ft = ft->next;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    while (temp1 != NULL)
    {
        int sum = temp1->val + carry;
        int put = sum % 10;
        carry = sum / 10;
        ListNode *newnode = new ListNode(put);
        if (fh == NULL)
        {
            fh = newnode;
            ft = newnode;
        }
        else
        {
            ft->next = newnode;
            ft = ft->next;
        }
        temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {
        int sum = temp2->val + carry;
        int put = sum % 10;
        carry = sum / 10;
        ListNode *newnode = new ListNode(put);
        if (fh == NULL)
        {
            fh = newnode;
            ft = newnode;
        }
        else
        {
            ft->next = newnode;
            ft = ft->next;
        }
        temp2 = temp2->next;
    }

    if (carry > 0)
    {
        ListNode *newnode = new ListNode(carry);
        ft->next = newnode;
        ft = newnode;
    }
    return fh;
}
};