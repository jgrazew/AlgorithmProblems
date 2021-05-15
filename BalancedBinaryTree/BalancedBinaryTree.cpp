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
    int findHeight(TreeNode* root){
        if(root == NULL) return 0;
        
        return std::max(findHeight(root->left), findHeight(root->right)) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        
        int leftSubTreeHeight = findHeight(root->left);
        int rightSubTreeHeight = findHeight(root->right);
        
      //if I do not add the 2nd and 3rd condition of: isBalanced(root->left) && isBalanced(root->right) then this solution fails to pass all test
      //i think this is because the finding the heights above and then the 1st condition of: std::abs(leftSubTreeHeight-rightSubTreeHeight) <= 1
      //is checking only the left and right sub tree
      //we have to dig deeper into all of the trees sub trees because the overall height might look balanced but you can have a sub tree within those 
      //that is not
        if(std::abs(leftSubTreeHeight-rightSubTreeHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right)){
            return true;
        }
        
        return false;
    }
};
