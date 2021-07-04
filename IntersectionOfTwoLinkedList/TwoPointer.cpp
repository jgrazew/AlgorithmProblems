//Time Complexity : O(n)
//Space Complexity : O(1)
//The 2 ListNodes can eith bethe same size or diferent size.
//We will Traverse both list at the same time. Letsa look at case that one list is longer then the other
//When we finish travesring the shorter list then we will set it equal to head of the longer one
//At the end of the longer list we will set it equal to the head of the shorter one
//The pointers will be traversing both list in the exact same amount of nodes
  //they will end up finding the intersecting node or both hit NULL
  //i.e In the second loop they will catch up to each other and will be at the same node
  //Ex- If 1 list is 5 elements and other list is 4 elements. The first iteration pointerOne will 
  //be one node ahead but then it will even out because it will traverse a list of only 4 elements
  //Both pointers will take a total of 9 iteration. If there was nio intesecting node then at this point they will both be pointing to NULL

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pointerOne = headA;
        ListNode *pointerTwo = headB;
        
        while(pointerOne != pointerTwo){
            
            if(pointerOne == NULL){
                pointerOne = headB;
            }else{
                pointerOne = pointerOne->next;
            }
            
            if(pointerTwo == NULL){
                pointerTwo = headA;
            }else{
                pointerTwo = pointerTwo->next;
            }
        }
        
        return pointerOne;
    }
};
