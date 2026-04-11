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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* node = head;
        while (node != nullptr) {
            count++;
            node = node->next;
        }

        if (n == count) {
            return head->next;
        }

        int remove_node = count - n;
        int i = 0;
        ListNode *new_node = head;
        while (new_node != nullptr){
            i++;
            if (i == remove_node) {
                new_node -> next = new_node->next->next;
                break;
            }
            new_node = new_node->next;
        }
        return head;

    }
};