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
                //if we didnt want to use the standard lib reverse algorithm we could reverse the vector through iterating through the vector starting
                //at the end then then swapping the front and back elements until we reach the middle.
                //We could also use a stack then pop off the stack and add back to the vector but this would be O(n) time complexity
                std::reverse(tempVec.begin(), tempVec.end());
            }
            
            zigZag.push_back(tempVec);
            
            //if we didnt want to use the reverse flag we could keep track of the level then use if(level % 2 == 0) { } to determine if we reverse or not 
            reverseFlag= !reverseFlag;
            
        }
     
        return zigZag;
        
    }
};
