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
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        std::vector<std::vector<int>> zigZag;
        
        if(root == NULL) return zigZag;
        
        std::queue<TreeNode*> q;
        bool reverseFlag = false;
        
        q.push(root);
        
        while(!q.empty()){
            
            int qSize = q.size();
            std::vector<int> tempVec;
            
            while(qSize > 0){
                
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->left != NULL){
                    q.push(temp->left);
                }
                
                if(temp->right != NULL){
                    q.push(temp->right);
                }
                
                tempVec.push_back(temp->val);
                qSize--;
            }
            
            if(reverseFlag){
                std::reverse(tempVec.begin(), tempVec.end());
            }
            
            zigZag.push_back(tempVec);
            
            reverseFlag= !reverseFlag;
            
        }
     
        return zigZag;
        
    }
};
