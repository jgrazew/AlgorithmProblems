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

//Iterative BFS solution (Level Order Traversal)
//  Time complexity is O(N) because you will have to iterate through all nodes in tree

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL) return std::vector<double>();
        
        std::queue<TreeNode*> q;
        std::vector<double> averages;
        
        q.push(root);
        
        while(!q.empty()){
            
            int levelSize = q.size();
            int denominator = q.size();
            double runningValue = 0;
            
            while(levelSize > 0){
                TreeNode* temp = q.front();
                q.pop();
                
                runningValue += temp->val;
                
                if(temp->left != nullptr){
                    q.push(temp->left);
                }
                
                if(temp->right != nullptr){
                    q.push(temp->right);
                }
                
                levelSize--;
            }
            
            averages.push_back(runningValue/denominator);
        }
        
        return averages;
    }
};
