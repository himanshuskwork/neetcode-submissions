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

//Linked List Cycle Detection
class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* slow;
        ListNode* fast;

        slow = head;
        if(head) 
            fast = head->next;
        else 
            fast = nullptr;
        

        while(fast && fast->next){
            if(slow == fast){
                return true;
            }

            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
    }
};
