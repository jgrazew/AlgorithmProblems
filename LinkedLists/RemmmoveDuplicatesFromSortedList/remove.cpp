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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* iterator = head;
        
        while(iterator->next != NULL){
            ListNode* temp = iterator->next;
            
            if(temp->val == iterator->val){
                iterator->next = temp->next;  
                delete(temp);
                //Don't move the itrator forward in this case because iterator->val and iterator->next->val might be another duplicate
            } else{
                iterator = iterator->next;
            }            
        }
        
        return head;
    }
};
