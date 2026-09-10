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
//Remove Nth Node From End of List
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0), *left, *right;
        dummy.next = head;
        left = &dummy;
        right = head;
        while(n > 0 && right != nullptr){
            right = right->next;
            n--;
        }   
        
        while(right != nullptr){
            right = right->next;
            left = left->next;
        }

        left->next = left->next->next;
        return dummy.next;
    }
};
