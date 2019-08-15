/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        TreeNode* current = root;
        stack<TreeNode*> s;
        TreeNode* current2 = NULL;
            
        while(current != NULL || !s.empty()){
            while(current != NULL){
                s.push(current);
                current = current->left;
            }
                
                current = s.top();
                s.pop();
                /*current2 = s.top(); THIS WAS BLOWING UP CODE!! because eventutally we are going to pop the last off and top                       will be null*/ 
                //if(current2 && current->val > current2->val){
                if(current2 && current->val <= current2->val){
                    return false;
                }
                
            //current2 is the previous and the previous value should be less then given the assumptions in readme
                current2 = current;
                current = current->right;
        }
        
        return true;
    }
};
