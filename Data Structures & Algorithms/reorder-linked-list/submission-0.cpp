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

//Reorder Linked List
class Solution {
public:
    void reorderList(ListNode* head) {
        
        ListNode* slow;
        ListNode* fast;
        
        slow = head;
        fast = head->next;

        //find middle
        while(fast != nullptr and fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        //Reverse the second half
        ListNode* second; 
        second = slow->next;
        slow->next = nullptr; //because this will be the last node of the final list

        ListNode* prev = nullptr;
        ListNode* temp;
        while(second != nullptr){   
            temp = second->next;
            second->next = prev;
            prev = second;
            second = temp;
        }
        //second = nullptr, prev = last_node

        //Merge the two halves
        ListNode* first;
        first = head;
        
        ListNode* temp1;
        ListNode* temp2;
        second = prev ;
        while(second != nullptr){
            temp1 = first->next;
            temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
        
    }
};
