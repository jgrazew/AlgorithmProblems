//create 2 dummy pointers; 1 for less than the partition number and 1 for greater than
//create a greater than and less than list from the ORIGINAL values (with out making copies)
//put the the list together
//Time complexity is O(n) and space complexity is O(1). O(1) because we are only creating 2 pointers, we are not creating copies of the nodes
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessThanList = new ListNode(-1);
        ListNode* lessThanDummy = lessThanList;
        ListNode* greaterThanList = new ListNode(-1);
        ListNode* greaterThanDummy = greaterThanList;
        
        while(head != NULL){
            if(head->val < x){
                lessThanList->next = head;
                lessThanList = lessThanList->next;
            } else {
                greaterThanList->next = head;
                greaterThanList = greaterThanList->next;
                
            }
            
            head = head->next;
        }
        
        greaterThanList->next = NULL;
        lessThanList->next = greaterThanDummy->next;
        
        return lessThanDummy->next;
    }
};
