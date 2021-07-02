//Post, Pre and In order traversals are Depth First Search while Level Order traversal is Breadth First Search 
//Time complexity is O(n) because you traverse each node once 
class Solution {
private:
    void postOrderTraverse(TreeNode* root, std::vector<int>& results){
        if(root == NULL) return;
        
        postOrderTraverse(root->left, results);
        postOrderTraverse(root->right, results);
        results.push_back(root->val);
        
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        std::vector<int> results;
        
        postOrderTraverse(root, results);       
        
        return results;
    }
};
