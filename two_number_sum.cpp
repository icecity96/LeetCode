/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* r = result;
        int c = 0;
        do{
            ListNode* temp = new ListNode((l1->val+l2->val+c)%10);
            c = (l1->val+l2->val+c)/10;
            l1=l1->next;
            l2=l2->next;
            result->next = temp;
            result = result->next;
        }while(l1 != nullptr && l2 != nullptr);
        if(l1 == nullptr && l2 != nullptr)
        {
            do{
            ListNode* temp = new ListNode((l2->val+c)%10);
            c = (l2->val+c)/10;
            l2=l2->next;
            result->next = temp;
            result = result->next;
            }while(l2 != nullptr);
        }
        if(l2==nullptr && l1 != nullptr)
        {
            do{
            ListNode* temp = new ListNode((l1->val+c)%10);
            c = (l1->val+c)/10;
            l1=l1->next;
            result->next = temp;
            result = result->next;
            }while(l1 != nullptr);
        }
        if(c==1)
        {
            result->next = new ListNode(1);
        }
        return r->next;
    }
};
