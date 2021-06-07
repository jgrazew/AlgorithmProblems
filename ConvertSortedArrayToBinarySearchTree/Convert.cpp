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
 //Trees almost always have a recrsive solution so as soon as you see "Tree" you can try to start thinking recursively 
 
class Solution {
    
private:
    TreeNode* constructTree(vector<int>& nums, int left, int right){
        //this means that we are at the leaves
        if(left > right){
            return NULL;
        }
        
        int mid = left + (right-left) / 2;
        TreeNode* tree = new TreeNode(nums[mid]);
        tree->left = constructTree(nums, left, mid-1);
        tree->right = constructTree(nums, mid+1, right);
        
        return tree;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) { return new TreeNode(); }
        
        return constructTree(nums, 0, nums.size()-1);
    }
};
