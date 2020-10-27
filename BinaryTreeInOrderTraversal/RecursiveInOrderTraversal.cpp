//Recursive solution: O(n) time and O(n) space (function call stack);


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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inOrder = vector<int>();
        sortInOrder(root, inOrder);
        
        return inOrder;
    }
    
private:
    void sortInOrder(TreeNode* root, vector<int> &inOrder){
        if(root == NULL){
            return;
        }
        
        sortInOrder(root->left, inOrder);
        inOrder.push_back(root->val);
        sortInOrder(root->right, inOrder);
    }    

};
