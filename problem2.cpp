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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int a , b, c = 0 ;
        int sum = 0;

        ListNode* result = new ListNode(0);
        ListNode* ans = result;

        while (l1!=nullptr || l2!=nullptr || c!=0) {
            a = (l1!=nullptr)? l1->val : 0;
            b = (l2!=nullptr)? l2->val : 0;
            sum = a+b+c;
            ans->next = new ListNode(sum % 10);
            ans = ans->next;                                          
            c = sum / 10;

            if(l1) {l1 = l1->next;}
            if(l2) {l2 = l2->next;}
        }

        return result->next;
    }
};