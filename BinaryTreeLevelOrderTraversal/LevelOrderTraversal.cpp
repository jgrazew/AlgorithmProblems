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
    vector<vector<int>> levelOrder(TreeNode* root) {
        TreeNode* current = root;
        queue<TreeNode*> q;
        
        vector<vector<int>> returnVector;
        
        if(current != NULL){
            q.push(current);
        }
        
        vector<int> levelTempVector;

        while(!q.empty()){ 
            
            int size = q.size();
            
            while(size){
                TreeNode* poppedElement = q.front();
                q.pop();
                levelTempVector.push_back(poppedElement->val);
                
                if(poppedElement->left != NULL){
                    q.push(poppedElement->left);
                }
                
                if(poppedElement->right != NULL){
                    q.push(poppedElement->right);
                }
                
               size--;         
            }//inner while loop
        
            returnVector.push_back(levelTempVector);
          
            levelTempVector.clear();
            
        }//outer while loop
        
        return returnVector;
    }
};
