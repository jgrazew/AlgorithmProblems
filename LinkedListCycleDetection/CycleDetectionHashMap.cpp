//below we use a hash map for the cycle detection. As we iterate through the linked list we add the pointer
//to the key of a hash map with a value of 1 which signify's how many times we have seen it.
//If the key is already in the map then we return true because we have detected a cycle. 

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        
        ListNode* current = head;
        map<ListNode*, int> hashMap;
        
        while(current != NULL){
            if(hashMap.find(current) != hashMap.end()){
                return true;
            }
            
            hashMap.emplace(current, 1);
            
            current = current->next;
        }
        
        return false;
    }
};
