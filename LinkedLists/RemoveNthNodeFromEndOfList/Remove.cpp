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

//By looking at my notes below you can see that I had some confusion with this problem
//By return head the codse worked unless for the edge case of removing the head
//example input would be [1,2] 2 OR [1,2,3] 3
//IN every other case head->val and dummy->next->val will be the same value but not when removing the head
//in this case dummy->next is updated because we never drop into while(fast != NULL){} to iterate slow
//so slow pointer is still pointing to dummy. NOTE: dummy has its own allocated address space and its next pointer points top head
//BUT dummy does not point to head itself. 
//Therefore when we drop to slow->next = slow->next->next; we change the next pointer of dummy since slow is still pointing to the same address space
//In conclusion making dummy->next no longer point to head which makes head->val and dummy->next->val  different when removing the head node

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || !head->next)return NULL;
        
        ListNode* dummy = new ListNode(-1, head);
        ListNode* fast = head;
        ListNode* slow = dummy;
        int count = 0;
        
        while(count < n && fast != NULL){
            fast = fast->next;
            count++;
        }
        
        while(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
      //previously I was returning head rather then creating a dummpy pointer then returning that
      //this was causing error because if head is removed 
        std::cout << head->val << std::endl;
        std::cout << dummy->next->val << std::endl;
        //return head;
        return dummy->next;
        
    }
};
