/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//Do a BFS but keep track of the number of nodes at each level so you can search through them then increment the level number afterwards 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        
        std::queue<TreeNode*> q;
        int size = 0;
        
        q.push(root);
        
        while(!q.empty()){   
            int qSize = q.size();
            
            while(qSize > 0){
                TreeNode* temp = q.front();
                q.pop();
                qSize--;
                
                if (temp->left != NULL){
                    q.push(temp->left);
                }
            
                if (temp->right != NULL){
                    q.push(temp->right);
                }
            }
            
            size++;
        }
        
        return size;
    }
};
