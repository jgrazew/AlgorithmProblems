//Time Complexity : O(n)
//Space Complexity : O(n)
//with a 2 pointer solution you can get  a space complexit of O(1)
//note that the reason the key is the address of a Linked List node is because yoiu arent looking for where the same value occurs
//you are actually looking for where the 2 list intersect. By interesecting that actually have the same address

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::map<ListNode*,int> hash;
        
        while(headA != NULL){
            hash[headA]++;
            headA = headA->next;
        }
        
        while(headB != NULL){
            hash[headB]++;
            
            if(hash[headB] == 2){
                return headB;
            }
            
            headB = headB->next;
        }
        
        return NULL;
    }
};
